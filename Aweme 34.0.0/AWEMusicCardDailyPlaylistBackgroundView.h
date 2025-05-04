@interface AWEMusicCardDailyPlaylistBackgroundView : UIView
@property (nonatomic) CAGradientLayer backgroundLayer;
@property (nonatomic) UIView dragHandlerView;
@property (nonatomic) UIColor baseColor;
@property (nonatomic) BOOL needHideDragHandlerView;
- (id)dragHandlerView;
- (void)setDragHandlerView:;
- (id)initWithFrame:baseColor:;
- (void)setNeedHideDragHandlerView:;
- (BOOL)needHideDragHandlerView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)backgroundLayer;
- (void)setBackgroundLayer:;
- (id)baseColor;
- (void)setBaseColor:;
+ (double)viewHeight;
@end
