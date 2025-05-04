@interface AWEMusicPublishPlaylistVideoUtil : NSObject
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) UIViewController containerVC;
- (id)trackParams;
- (void)setTrackParams:;
- (void)setContainerVC:;
- (id)containerVC;
- (id)createPlaylistTipViewWithContainer:trackParams:;
- (void)didClickTipMore;
- (void).cxx_destruct;
+ (id)publisPlaylistAnchorModelWithPlaylistInfo:;
@end
