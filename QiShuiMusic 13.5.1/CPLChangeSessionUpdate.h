@interface CPLChangeSessionUpdate : NSObject
@property (nonatomic) NSString libraryVersion;
@property (nonatomic) NSDate queuedDate;
@property (nonatomic) NSString statusDescription;
- (id)statusDescription;
- (id)initWithStore:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)applyToStore:error:;
- (id)storageForStatusInStore:;
- (void).cxx_destruct;
- (id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:;
- (BOOL)discardFromStore:error:;
- (id)libraryVersion;
- (id)queuedDate;
+ (BOOL)supportsSecureCoding;
@end
