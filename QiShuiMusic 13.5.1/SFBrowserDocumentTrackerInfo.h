@interface SFBrowserDocumentTrackerInfo : NSObject
@property (nonatomic) <_SFBrowserDocument> document;
@property (nonatomic) NSSet allowedKnownTrackingThirdParties;
@property (nonatomic) NSSet preventedKnownTrackingThirdParties;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)document;
- (void).cxx_destruct;
- (id)initWithDocument:;
- (void)updateKnownTrackingThirdPartiesWithCompletionHandler:;
- (void)documentDidCommitNavigation;
- (void)_updateKnownTrackingThirdPartiesWithCompletionHandler:;
- (void)_resetKnownTrackingThirdParties;
- (void)_flushKnownTrackingThirdParties;
- (id)allowedKnownTrackingThirdParties;
- (id)preventedKnownTrackingThirdParties;
+ (BOOL)trackingPreventionEnabled;
@end
