@interface CJPayRDOptimizationConfig : JSONModel
@property (nonatomic) BOOL isPopupVCUseCoordinatorPop;
@property (nonatomic) BOOL isAddLoadingViewInTopHalfPage;
- (BOOL)isAddLoadingViewInTopHalfPage;
- (BOOL)isPopupVCUseCoordinatorPop;
- (void)setIsAddLoadingViewInTopHalfPage:;
- (void)setIsPopupVCUseCoordinatorPop:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
