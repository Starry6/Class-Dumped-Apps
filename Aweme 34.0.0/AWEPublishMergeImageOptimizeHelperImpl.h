@interface AWEPublishMergeImageOptimizeHelperImpl : NSObject
@property (nonatomic) <ACCPublishMergeImageHelperProtocol> mergeImageHelper;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mergeImageHelper;
- (void)setMergeImageHelper:;
- (BOOL)enableImageMergeOptimize;
- (double)downsampleRate;
- (BOOL)shouldRecodeImage;
- (id)recodeImageData:;
- (void)cacheImage:workspace:;
- (void)resetCachedImage:workspace:;
- (void).cxx_destruct;
@end
