//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface IOSBGDownload_Puffer_LocalTask_Helper : NSObject
{
    NSMutableDictionary *_taskDictionary;
    NSString *_localFilePath;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *localFilePath; // @synthesize localFilePath=_localFilePath;
@property(retain, nonatomic) NSMutableDictionary *taskDictionary; // @synthesize taskDictionary=_taskDictionary;
- (void).cxx_destruct;
- (_Bool)GetPufferWorkTasks:(id *)arg1 withWaitTaskArray:(id *)arg2;
- (_Bool)SetPufferWorkTasks:(id *)arg1 withWaitTaskArray:(id *)arg2;
- (_Bool)SavePufferLocalFile;
- (_Bool)OpenPufferLocalTaskFile:(id)arg1 forceCreateNew:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end

