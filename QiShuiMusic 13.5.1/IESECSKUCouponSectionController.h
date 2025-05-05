@interface IESECSKUCouponSectionController : IGListSectionController
@property (nonatomic) IESECSKUCouponViewModel viewModel;
@property (nonatomic) <IESECSKUCouponSectionControllerDelegate> delegate;
- (id)cellForItemAtIndex:;
- (void)didUpdateToObject:;
- (id)supportedElementKinds;
- (long long)numberOfItems;
- (id)viewModel;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setViewModel:;
- (void)didSelectItemAtIndex:;
- (id)sizeForItemAtIndex:;
@end
