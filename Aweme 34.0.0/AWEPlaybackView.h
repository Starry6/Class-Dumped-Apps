@interface AWEPlaybackView : UIView
@property (nonatomic) AVPlayer player;
- (id)initWithFrame:;
- (id)player;
- (void)setPlayer:;
+ (Class)layerClass;
@end
