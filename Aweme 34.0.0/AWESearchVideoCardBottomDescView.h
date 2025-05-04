@interface AWESearchVideoCardBottomDescView : UIView
@property (nonatomic) YYLabel contentView;
@property (nonatomic) AWESearchVideoCardBottomDescModel model;
- (void)setModel:;
- (id)init;
- (id)contentView;
- (id)model;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setupUI;
- (void)updateWithModel:;
+ (id)attributedStringWithModel:;
@end
