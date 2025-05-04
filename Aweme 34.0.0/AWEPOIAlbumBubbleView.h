@interface AWEPOIAlbumBubbleView : UIView
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) UILabel contentView;
- (void)bubbleEaseOut;
- (id)initWithFrame:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)arrowView;
- (void)setArrowView:;
- (void)setupViews;
+ (void)handleBubbleDisplayed;
+ (BOOL)hasBeenShown;
@end
