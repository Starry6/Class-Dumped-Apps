@interface AWELongPressPanelVideoDeconstructViewModel : AWELongPressPanelBaseViewModel
@property (nonatomic) AWESearchVideoDeconstructEntity firstEntity;
- (BOOL)needShow;
- (void)configVM;
- (id)videoLongPressChannelBlackList;
- (void).cxx_destruct;
- (void)setFirstEntity:;
- (id)firstEntity;
+ (id)longPressPanelViewModel;
@end
