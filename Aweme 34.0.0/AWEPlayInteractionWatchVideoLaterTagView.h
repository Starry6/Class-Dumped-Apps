@interface AWEPlayInteractionWatchVideoLaterTagView : UIView
@property (nonatomic) NSString title;
@property (nonatomic) UILabel label;
@property (nonatomic) UIImageView indicatorImageView;
@property (nonatomic) BOOL hasIndicator;
@property (nonatomic) @? clickBlock;
- (void)dealloc;
- (void)setClickBlock:;
- (id)clickBlock;
- (void)onClick;
- (id)indicatorImageView;
- (void)setIndicatorImageView:;
- (id)initWithTitle:hasIndicator:clickBlock:;
- (void)setLabel:;
- (void)setup;
- (id)label;
- (void).cxx_destruct;
- (id)title;
- (void)setHasIndicator:;
- (BOOL)hasIndicator;
- (void)setTitle:;
@end
