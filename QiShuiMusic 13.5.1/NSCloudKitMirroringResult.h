@interface NSCloudKitMirroringResult : NSPersistentStoreResult
@property (nonatomic) NSString storeIdentifier;
@property (nonatomic) NSCloudKitMirroringRequest request;
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL madeChanges;
@property (nonatomic) NSError error;
- (id)storeIdentifier;
- (void)dealloc;
- (id)error;
- (id)request;
- (BOOL)success;
- (BOOL)madeChanges;
- (id)description;
- (id)initWithRequest:storeIdentifier:success:madeChanges:error:;
@end
