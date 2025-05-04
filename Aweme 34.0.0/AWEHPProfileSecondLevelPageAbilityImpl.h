@interface AWEHPProfileSecondLevelPageAbilityImpl : NSObject
@property (nonatomic) AWELeftSideBarBasePresenter presenter;
@property (nonatomic) AWEHPProfileSideBarManager manager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getHPSideBarControllerLoadModelWithOriginModel:;
- (id)initWithPresenter:withManager:;
- (id)getHPSideBarControllerFactory;
- (void)setHPSideBarViewControllerManager:;
- (void)updateHPSideBarViewControllerCollectionView;
- (void)recoverHPSideBarViewControllerCollectionView;
- (void)setManager:;
- (id)presenter;
- (id)manager;
- (void)setPresenter:;
- (void).cxx_destruct;
@end
