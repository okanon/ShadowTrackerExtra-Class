//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HSClearedUserDAO-Protocol.h"

@class HsSQLDbHelper, NSString;

@interface HSiOSClearedUserDAO : NSObject <HSClearedUserDAO>
{
    HsSQLDbHelper *_dataBaseHelper;
    Class _clearedUserQueryBuilder;
}

+ (id)usersFromData:(id)arg1;
@property(retain, nonatomic) Class clearedUserQueryBuilder; // @synthesize clearedUserQueryBuilder=_clearedUserQueryBuilder;
@property(retain, nonatomic) HsSQLDbHelper *dataBaseHelper; // @synthesize dataBaseHelper=_dataBaseHelper;
- (void).cxx_destruct;
- (_Bool)executeUpdateQuery:(id)arg1 withParameters:(id)arg2;
- (id)executeFetchQuery:(id)arg1 withParameters:(id)arg2;
- (_Bool)deleteClearedUser:(id)arg1;
- (_Bool)updateSyncState:(unsigned long long)arg1 forLocalId:(id)arg2;
- (id)fetchClearedUsers;
- (id)insertClearedUser:(id)arg1;
- (_Bool)createDeletedUserTable;
- (id)initWithUserDBHelper:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

