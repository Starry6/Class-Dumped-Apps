@interface PLDeferredPhotoPendingAssetRecord : NSObject
@property (nonatomic) PLManagedAsset asset;
@property (nonatomic) PLPhotoLibrary library;
@property (nonatomic) NSString requestReason;
@property (nonatomic) BOOL isBackgroundPriority;
@property (nonatomic) Q signpostId;
- (void)setRequestReason:;
- (id)asset;
- (void)setLibrary:;
- (id)requestReason;
- (id)library;
- (void)setSignpostId:;
- (void).cxx_destruct;
- (void)setAsset:;
- (unsigned long long)signpostId;
- (BOOL)isBackgroundPriority;
- (void)setIsBackgroundPriority:;
@end
