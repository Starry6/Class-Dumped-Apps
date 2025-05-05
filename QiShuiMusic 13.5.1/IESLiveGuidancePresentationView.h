@interface IESLiveGuidancePresentationView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIButton button;
@property (nonatomic) NSString guidanceTips;
@property (nonatomic) NSArray guidanceImages;
- (id)guidanceImages;
- (id)guidanceTips;
- (void)setGuidanceImages:;
- (void)setGuidanceTips:;
- (void)setTipsLabel:;
- (id)tipsLabel;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void)setup;
- (id)button;
- (void).cxx_destruct;
- (id)imageView;
- (void)setButton:;
- (id)titleLabel;
- (void)setImageView:;
+ (double)defaultHeight;
@end
