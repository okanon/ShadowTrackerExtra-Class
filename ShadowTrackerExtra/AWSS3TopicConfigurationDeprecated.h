//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSArray, NSString;

@interface AWSS3TopicConfigurationDeprecated : AWSModel
{
    long long _event;
    NSArray *_events;
    NSString *_identifier;
    NSString *_topic;
}

+ (id)eventJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSArray *events; // @synthesize events=_events;
@property(nonatomic) long long event; // @synthesize event=_event;
- (void).cxx_destruct;

@end
