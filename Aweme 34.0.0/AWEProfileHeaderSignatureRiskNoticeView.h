@interface AWEProfileHeaderSignatureRiskNoticeView : UIView
@property (nonatomic) @? clickActionBlock;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel noticeLabel;
- (void)__setupUI;
- (void)setClickActionBlock:;
- (id)clickActionBlock;
- (void)tapGestureAction;
- (void)configWithNoticeMessage:clickActionBlock:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)setNoticeLabel:;
- (id)noticeLabel;
+ (double)computedHeightWithNoticeMessage:hasAction:maxWidth:;
+ (id)clickableNoticeMessageWithOriginText:;
+ (id)labelFont;
+ (double)iconWidth;
+ (id)fontColor;
@end
