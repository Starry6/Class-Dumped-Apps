@interface PHResourceLocalAvailabilityRequestOptions : NSObject
@property (nonatomic) BOOL treatLivePhotoAsStill;
@property (nonatomic) BOOL dontAllowRAW;
@property (nonatomic) BOOL includeAllAssetResources;
@property (nonatomic) NSObject<OS_dispatch_queue> resultHandlerQueue;
@property (nonatomic) BOOL allowMissingVideoComplement;
- (void).cxx_destruct;
- (id)description;
- (void)setResultHandlerQueue:;
- (id)resultHandlerQueue;
- (BOOL)includeAllAssetResources;
- (void)setIncludeAllAssetResources:;
- (BOOL)treatLivePhotoAsStill;
- (void)setTreatLivePhotoAsStill:;
- (BOOL)dontAllowRAW;
- (void)setDontAllowRAW:;
- (BOOL)allowMissingVideoComplement;
- (void)setAllowMissingVideoComplement:;
@end
