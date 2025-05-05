@interface IESLiveSaaSFeedDislikeView : UIView
@property (nonatomic) UIView arrowBgView;
@property (nonatomic) UIView contentBgView;
@property (nonatomic) {CGPoint=dd} closeButtonCenterPoint;
@property (nonatomic) BOOL isArrowOnTop;
- (void)setArrowBgView:;
- (id)arrowBgView;
- (id)closeButtonCenterPoint;
- (id)contentBgView;
- (id)initWithFrame:closeButtonCenterPoint:isArrowOntop:;
- (BOOL)isArrowOnTop;
- (void)setCloseButtonCenterPoint:;
- (void)setContentBgView:;
- (void)setIsArrowOnTop:;
- (void).cxx_destruct;
- (void)buildView;
@end
