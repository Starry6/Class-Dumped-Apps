@interface CADDatabaseOperationGroup : CADOperationGroup
- (void)CADDatabaseGetDefaultAlarmOffsetForAllDay:reply:;
- (void)CADDatabaseUnregisterForDetailedChangeTracking:;
- (int)findDatabaseForObject:withUpdates:personas:accounts:nextTempDBID:;
- (int)preflightAccessForDeletes:updates:inDatabase:;
- (void)CADDatabaseRebuildOccurrenceCacheWithReply:;
- (id)_insert:delete:update:database:error:;
- (void)CADDatabaseLastConfirmedSplashScreenVersion:;
- (void)CADDatabaseMarkIndividualChangesConsumed:reply:;
- (void)CADDatabaseExportICSDataForCalendarItems:options:reply:;
- (id)_copyToIntCFSetRef:;
- (void)CADDatabaseMigrateSubscribedCalendar:toSource:reply:;
- (id)_importEvents:data:intoCalendarWithID:inDatabase:optionsMask:batchSize:outCalendarObjectID:outError:;
- (void)CADDatabaseGetUUID:;
- (void)CADDatabaseRegisterForDetailedChangeTrackingInSource:reply:;
- (BOOL)_CADDatabaseCanModifyCalendarDatabase;
- (void)CADDatabaseCanModifyCalendarDatabase:;
- (void)CADDatabaseImportEvents:fromICSData:intoCalendarsWithIDs:optionsMask:batchSize:reply:;
- (void)CADDatabaseFetchObjectChangesForEntityTypes:insideObject:reply:;
- (void)CADDatabaseExportICSDataForCalendar:options:reply:;
- (id)_insertObjectsWithTemporaryObjectIDs:database:error:;
- (void)CADDatabaseCommitDeletes:updatesAndInserts:andFetchChangesSinceTimestamp:withReply:;
- (int)_updatePropertiesAndRelations:database:insertedObjectMap:;
- (void)CADDatabaseGetChangesSinceSequenceToken:reply:;
- (void)CADDatabaseMarkChangedObjectIDsConsumedUpToSequenceToken:reply:;
- (void)CADDatabaseFetchChangedObjectIDs:;
- (void)CADDatabaseSetShowsDeclinedEvents:reply:;
- (id)_copyToIntCFArrayRef:;
- (void)CADDatabaseGetSequenceToken:;
- (int)preflightObjectID:inDatabase:;
- (int)_deleteObjects:database:;
- (int)insert:deletes:updates:insertedObjectIDMap:inDatabase:;
- (void)CADDatabaseGetChangedEntityIDsSinceTimestamp:reply:;
+ (BOOL)requiresEventAccess;
@end
