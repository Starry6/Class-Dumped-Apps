@interface VCPMADVIRemoveBackgroundResource : VCPMADVisionResource
@property (nonatomic) BOOL maskOnly;
@property (nonatomic) VCPMADVIRemoveBackgroundCachedImageHandler cachedImageHandler;
- (void)purge;
- (void).cxx_destruct;
- (long long)activeCost;
- (long long)inactiveCost;
- (BOOL)maskOnly;
- (void)setMaskOnly:;
- (id)cachedImageHandler;
- (void)setCachedImageHandler:;
+ (id)sharedResource;
@end
