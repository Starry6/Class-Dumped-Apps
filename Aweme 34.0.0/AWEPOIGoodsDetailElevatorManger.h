@interface AWEPOIGoodsDetailElevatorManger : NSObject
@property (nonatomic) NSMutableArray titleKeyArray;
@property (nonatomic) NSMutableDictionary titleKeyDictionary;
@property (nonatomic) BOOL isFloat;
@property (nonatomic) DitoComponentViewModel navigationBarViewModel;
@property (nonatomic) <AWEPOIGoodsDetailElevatorMangerDelegate> delegate;
- (BOOL)isFloat;
- (void)setIsFloat:;
- (void)updateWithTitleTabs:viewModel:isFloat:;
- (void)pageViewDidScrollWithOffsetYValue:fromForceUpdate:;
- (void)setTitleKeyArray:;
- (void)setTitleKeyDictionary:;
- (id)titleKeyArray;
- (void)setNavigationBarViewModel:;
- (id)navigationBarViewModel;
- (id)titleKeyDictionary;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
