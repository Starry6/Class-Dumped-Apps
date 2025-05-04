@interface AWELeftSideBarRecentVisitHighValueEntranceParams : NSObject
@property (nonatomic) q index;
@property (nonatomic) AWELeftSideBarDynamicItemHighValueAppModel highValueModel;
@property (nonatomic) AWELeftSideBarRecentVisitAppContainerView appContainerView;
@property (nonatomic) double uniqId;
- (id)highValueModel;
- (void)setHighValueModel:;
- (id)appContainerView;
- (void)setAppContainerView:;
- (double)uniqId;
- (void)setUniqId:;
- (void)setIndex:;
- (long long)index;
- (void).cxx_destruct;
@end
