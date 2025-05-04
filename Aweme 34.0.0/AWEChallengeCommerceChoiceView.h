@interface AWEChallengeCommerceChoiceView : UIView
@property (nonatomic) DUXCheckBox box;
@property (nonatomic) UILabel boxLabel;
@property (nonatomic) UILabel videoTabLabel;
@property (nonatomic) UIView contentView;
@property (nonatomic) @? fetchVideoBlock;
- (void)setFetchVideoBlock:;
- (id)fetchVideoBlock;
- (BOOL)isBoxSelected;
- (id)boxLabel;
- (id)videoTabLabel;
- (void)tapChoiceView:;
- (void)tapTaskChoiceView;
- (id)initWithIsLightColor:fetchVideoBlock:;
- (void)setBoxLabel:;
- (void)setVideoTabLabel:;
- (void)setup;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setBox:;
- (id)box;
@end
