@interface MNTrafficIncidentAlertUpdater : NSObject
@property (nonatomic) <MNTrafficIncidentAlertUpdaterDelegate> delegate;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)clearAlerts;
- (void)updateForLocation:;
- (void)updateForReroute:;
- (void)updatePreviousIncidentResultForRequest:;
- (void)updateForAlertFromResponse:;
- (void)_removeActiveAlert;
- (void)_updateAlertDistanceAndETA:;
- (void)_updateRerouteProposalStatusForRequest:;
- (void)_updatePreviousDisplayedBannerForRequest:;
- (void)_activateAlertForLocation:;
@end
