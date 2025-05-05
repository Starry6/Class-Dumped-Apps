@interface IESLiveShareServiceAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackEvent:eventContext:params:;
- (id)createVSScreenRecordShareContentModel:recordVideoURL:recordVideoAsset:;
- (void)dealLandScapeScreenShotAction:localScreenshotURL:eventContext:;
- (void)dealVSSnapShotShareAction:localScreenshotURL:eventContext:;
- (long long)isShareCommandViewShowing;
- (void)setRecordVideoAsset:inShareContentModel:;
@end
