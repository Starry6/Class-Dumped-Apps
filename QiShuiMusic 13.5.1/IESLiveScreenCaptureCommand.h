@interface IESLiveScreenCaptureCommand : NSObject
@property (nonatomic) UIView mediaView;
@property (nonatomic) UIImage screenshot;
@property (nonatomic) IESLiveShareCaptureWidget widget;
- (id)initWithCaptureWidget:;
- (BOOL)renderWaterMarkOnScreenshot;
- (void)saveAlbum;
- (id)tryToFindMetalView;
- (BOOL)takeScreenshot;
- (void)setWidget:;
- (id)widget;
- (id)mediaView;
- (void)setMediaView:;
- (void).cxx_destruct;
- (id)screenshot;
- (void)setScreenshot:;
@end
