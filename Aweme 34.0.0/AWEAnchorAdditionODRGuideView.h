@interface AWEAnchorAdditionODRGuideView : UIView
@property (nonatomic) UIImageView guideImage;
@property (nonatomic) UILabel guideLabel;
@property (nonatomic) UILabel guideContent;
- (id)guideLabel;
- (void)setGuideLabel:;
- (id)guideContent;
- (void)setGuideContent:;
- (void)updateWithGuideData:;
- (id)init;
- (void).cxx_destruct;
- (id)guideImage;
- (void)setGuideImage:;
- (void)setUpUI;
@end
