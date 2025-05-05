@interface CJPayDataSecurityModel : NSObject
@property (nonatomic) BOOL isNeedDataSecurity;
@property (nonatomic) UIViewController sourceVC;
@property (nonatomic) UIView dimView;
- (void)bindViewControllerToModel:;
- (BOOL)cj_hasCJPayVC:;
- (BOOL)isNeedDataSecurity;
- (void)p_addBlurview:;
- (void)p_bindDimView:;
- (void)p_blurImage:;
- (void)p_blurV2:;
- (void)p_clearBlurView:;
- (void)p_clearDimView;
- (void)setIsNeedDataSecurity:;
- (void)setSourceVC:;
- (id)sourceVC;
- (void)dealloc;
- (void).cxx_destruct;
- (id)dimView;
- (void)setDimView:;
+ (id)shared;
@end
