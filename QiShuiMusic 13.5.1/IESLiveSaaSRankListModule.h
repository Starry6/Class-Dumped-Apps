@interface IESLiveSaaSRankListModule : IESLiveSaaSModule
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enableVerticalEntrance;
- (void)hideRankListView;
- (void)hideVerticalEntranceAnimated:completion:;
- (void)showAudienceListWithRankType:;
- (void)showAudienceRankList;
- (void)showRankListView;
- (void)showVerticalEntranceAnimated:;
- (void)updateAudienceListVipInfo;
- (void)updateAudienceListVipInfoService;
- (void)updateEntranceStatus:;
@end
