@interface IESLiveSaaSSlideLabelAnimator : NSObject
@property (nonatomic) <IESLiveSaaSLanguageService> languageService;
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) BOOL disableFilterName;
- (id)languageService;
- (BOOL)disableFilterName;
- (void)setDisableFilterName:;
- (void)setLanguageService:;
- (void)showFilterName:slidePosition:force:;
- (double)titleLabelPositionY;
- (void)setTitleLabel:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)titleLabel;
@end
