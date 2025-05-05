@interface IESLiveAudienceInteractiveRootPanelTrackModel : NSObject
@property (nonatomic) BOOL hasInviteUserButtonShowTracked;
@property (nonatomic) BOOL hasTrackAutoLinkShow;
@property (nonatomic) q applyPanelRefreshTag;
@property (nonatomic) NSString lastTrackShowPage;
- (long long)applyPanelRefreshTag;
- (BOOL)hasInviteUserButtonShowTracked;
- (BOOL)hasTrackAutoLinkShow;
- (id)lastTrackShowPage;
- (void)setApplyPanelRefreshTag:;
- (void)setHasInviteUserButtonShowTracked:;
- (void)setHasTrackAutoLinkShow:;
- (void)setLastTrackShowPage:;
- (id)init;
- (void).cxx_destruct;
@end
