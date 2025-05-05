@interface AXMImageCaptionModelAssetManager : NSObject
@property (nonatomic) NSURL baseURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setBaseURL:;
- (id)baseURL;
- (void)_performWithLock:;
- (void).cxx_destruct;
- (void)assetController:didFinishRefreshingAssets:wasSuccessful:error:;
- (id)modelURLForType:timeout:;
- (id)infoForModelAtURL:;
- (id)_modelURLForType:baseURL:;
+ (id)sharedInstance;
@end
