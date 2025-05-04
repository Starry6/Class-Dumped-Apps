@interface AWEFullScreenAdEggImageView : UIView
@property (nonatomic) UIImageView contentView;
@property (nonatomic) AWEFullScreenAdEggModel model;
@property (nonatomic) AWEFullScreenAdEggViewController adEggContainer;
- (void)setAdEggContainer:;
- (void)startShow;
- (id)adEggContainer;
- (void)setModel:;
- (id)contentView;
- (id)model;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)reset;
- (void)updateWithModel:;
+ (BOOL)canShowWithModel:;
@end
