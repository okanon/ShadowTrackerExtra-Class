//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GADServerRequest, GADServerResponse;

@interface GADServerTransaction : NSObject
{
    GADServerRequest *_serverRequest;
    GADServerResponse *_serverResponse;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GADServerResponse *serverResponse;
@property(readonly, nonatomic) GADServerRequest *serverRequest;
- (id)initWithServerRequest:(id)arg1 serverResponse:(id)arg2;

@end

