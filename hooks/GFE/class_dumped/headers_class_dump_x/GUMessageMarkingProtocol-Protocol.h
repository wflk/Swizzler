/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol GUMessageMarkingProtocol <NSObject>
- (id)bottomBody:(int)fp8;
- (id)topBody:(int)fp8;
- (id)subject:(int)fp8;
- (id)select:(int)fp8;
- (id)markingTitle;
- (int)noneMarking;
- (BOOL)isNoneMarking:(int)fp8;
- (BOOL)markingValid:(int)fp8;
- (int)numberOfMarkings;
- (id)messageMarkingNames;
- (BOOL)isEnabled;
- (int)defaultMessageMarking;
- (BOOL)areMarkingsProvidedFromGMC;
@end
