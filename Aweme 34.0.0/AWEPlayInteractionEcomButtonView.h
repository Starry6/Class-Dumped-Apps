@interface AWEPlayInteractionEcomButtonView : UIView
@property (nonatomic) UIView ecomButtonStackView;
@property (nonatomic) AWEPlayInteractionWrapperView leftWrapperView;
@property (nonatomic) AWEPlayInteractionWrapperView mediumWrapperView;
@property (nonatomic) AWEPlayInteractionWrapperView rightWrapperView;
@property (nonatomic) NSArray initialAreas;
@property (nonatomic) NSArray finalAreas;
- (id)initialAreas;
- (void)setInitialAreas:;
- (id)finalAreas;
- (void)setFinalAreas:;
- (void)setUpButtonWithModel:;
- (id)ecomButtonStackView;
- (void)resetStackView;
- (id)leftWrapperView;
- (id)mediumWrapperView;
- (id)rightWrapperView;
- (void)setEcomButtonStackView:;
- (void)setLeftWrapperView:;
- (void)setMediumWrapperView:;
- (void)setRightWrapperView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
