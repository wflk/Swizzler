/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSString;

@interface SBOpenInFileInfo : _ABAddressBookAddRecord
{
    NSString *_fileName;
    NSString *_filePath;
    NSString *_mimeType;
    int _fileSize;
}

- (void)setMimeType:(id)fp8;
- (id)mimeType;
- (void)setFileSize:(int)fp8;
- (int)fileSize;
- (void)setFilePath:(id)fp8;
- (id)filePath;
- (void)setFileName:(id)fp8;
- (id)fileName;
- (void)dealloc;

@end

