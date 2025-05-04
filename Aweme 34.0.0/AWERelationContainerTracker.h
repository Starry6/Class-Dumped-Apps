@interface AWERelationContainerTracker : NSObject
@property (nonatomic) AWEFollowListTarBarModel firstTabBarModel;
@property (nonatomic) NSDate enterRelationContainerTime;
- (id)firstTabBarModel;
- (void)trackRelationListConsumeInfoWithFollowListViewModel:;
- (void)trackRelationListConsumeInfoWithFansListViewModel:;
- (void)setEnterRelationContainerTime:;
- (void)setFirstTabBarModel:;
- (id)enterRelationContainerTime;
- (void).cxx_destruct;
@end
