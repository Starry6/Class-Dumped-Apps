@interface AWEIMCardBelowQuickEmoticonView : UIView
@property (nonatomic) AWEIMCacheableImageView imageView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) AWEIMCardBelowQuickEmoticonRenderModel renderModel;
- (void)p_setupUI;
- (id)renderModel;
- (void)setRenderModel:;
- (void)renderWithModel:;
- (id)textLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)setTextLabel:;
@end
