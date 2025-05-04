@interface AWEPadProgressPauseSpeedButtonView : UIView
@property (nonatomic) UILabel speedTextLabel;
@property (nonatomic) UILabel speedNumberLabel;
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
- (id)speedTextLabel;
- (id)speedNumberLabel;
- (void)setSpeedTextLabel:;
- (void)setSpeedNumberLabel:;
- (id)init;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)setupView;
- (void)updateText:;
@end
