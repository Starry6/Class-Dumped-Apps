@interface IESLivePKAnchorRematchGuideView : UIView
@property (nonatomic) BOOL isSigned;
@property (nonatomic) UIImageView checkBoxView;
@property (nonatomic) @? guideActionBlock;
- (void)boxButtonDidClick:;
- (id)checkBoxView;
- (id)guideActionBlock;
- (void)guideAutoMatchDidClick:;
- (void)guideCancelBtnDidClick:;
- (void)setCheckBoxView:;
- (void)setGuideActionBlock:;
- (void)setupGuideView;
- (BOOL)isSigned;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setIsSigned:;
@end
