@interface MUIBucketSenderCloudStorage : NSObject
@property (nonatomic) <MUIBucketSenderCloudStorageDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeAllObjects;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)persistedDictionaryDidChangeRemotelyWithChangedItems:deletedItems:;
- (id)_mergeChangesForRemotelyChangedKeys:localStore:cloudStore:;
- (id)initWithMutableDictionary:delegate:;
- (void)moveSender:toBucket:userInitiated:;
- (void)moveSenderWithEmailAddresses:toBucket:userInitiated:;
- (void)removeSender:;
- (void)_removeSenderWithEmailAddresses:;
- (id)_addressToUseFromAddress:;
@end
