terraform {
  required_providers {
    aws = {
      source  = "hashicorp/aws"
      version = "~> 5.0"
    }
  }
}

provider "aws" {
  access_key = "test"
  secret_key = "test"
  region     = "us-east-1"

  endpoints {
    s3 = "http://localhost:4566"
    lambda = "http://localhost:4566"
  }
}

resource "aws_s3_bucket" "s3_start" {
  bucket = "s3-start"
  force_destroy = true
}

resource "aws_s3_bucket" "s3_finish" {
  bucket = "s3-finish"
  force_destroy = true
}
