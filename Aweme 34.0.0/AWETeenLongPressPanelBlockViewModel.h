@interface AWETeenLongPressPanelBlockViewModel : AWETeenLongPressPanelBaseViewModel
@property (nonatomic) <AWETeenLongPressPanelBlockDelegate> blockDelegate;
@property (nonatomic) AWEUserModel userModel;
- (void)configVM;
- (id)initWithUserModel:delegate:;
- (void)setBlockDelegate:;
- (id)blockDelegate;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
@end
