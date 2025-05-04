@interface AWEPadProgressPauseNormalButtonView : UIView
@property (nonatomic) UILabel label;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) @? tapBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTapBlock:;
- (id)tapBlock;
- (void)handleTapSpeedButton;
- (void)degradeButtonIfNeeded;
- (void)updateIcon:;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)setupView;
- (void)updateText:;
- (id)initWithText:icon:;
@end
