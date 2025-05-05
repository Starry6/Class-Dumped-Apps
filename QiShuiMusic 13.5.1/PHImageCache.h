@interface PHImageCache : NSObject
@property (nonatomic) <PHImageCacheDelegate> delegate;
- (id)init;
- (void)removeAllEntries;
- (void)removeEntriesForKeys:;
- (void)setDelegate:;
- (BOOL)pinEntryForKey:requestID:inFlightRequestID:;
- (void)commitChangesWithQueueToProcessDeletes:;
- (void)_didReceiveMemoryWarningNotification:;
- (BOOL)populateEntryWithImage:requestID:forKey:additionalInfo:;
- (id)delegate;
- (void)queryEntryForKey:didWaitForInFlightRequest:didFindImage:entryIsValidBlock:resultHandler:;
- (void).cxx_destruct;
- (void)_removeEntry:;
@end
