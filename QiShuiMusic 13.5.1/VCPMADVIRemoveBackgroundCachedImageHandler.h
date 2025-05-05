@interface VCPMADVIRemoveBackgroundCachedImageHandler : NSObject
@property (nonatomic) VNImageRequestHandler requestHandler;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} regionOfInterest;
- (void).cxx_destruct;
- (id)requestHandler;
- (id)regionOfInterest;
- (id)initWithImageAsset:requestHandler:regionOfInterest:;
- (BOOL)matchesImageAsset:;
@end
