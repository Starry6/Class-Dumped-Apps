@interface AWEFeedRelatedSearchTipView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) YYLabel tipsLabel;
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) UIColor arrowColor;
@property (nonatomic) @? noticeTapped;
- (id)tipsLabel;
- (void)reloadWithModel:;
- (void)setTipsLabel:;
- (id)arrowColor;
- (void)setArrowColor:;
- (void)setNoticeTapped:;
- (id)noticeTapped;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setImageView:;
- (id)imageView;
- (id)arrowView;
- (void)setArrowView:;
@end
