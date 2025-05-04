@interface AWELongPressPanelDouPlusViewModel : AWELongPressPanelBaseViewModel
@property (nonatomic) <AWEFeedDouPlusLongPressShareManager> douplusManager;
- (BOOL)needShow;
- (id)getDouPlusShowClickTrackParams;
- (id)aAWEFeedModuleServiceDOUYINSSAdapter;
- (id)fetchLocalPromotionTrackParams;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (id)douplusManager;
- (id)aAWEFeedLongPressPanelCommonAdapter;
- (void)trackShowDouPlus;
- (void)setDouplusManager:;
- (void).cxx_destruct;
+ (Class)aAWEFeedModuleServiceDOUYINSSAdapterClass;
+ (id)longPressPanelViewModel;
+ (Class)aAWEFeedLongPressPanelCommonAdapterClass;
@end
