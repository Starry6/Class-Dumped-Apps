@interface FontServicesDaemonManager : NSObject
@property (nonatomic) NSXPCConnection connection;
- (void)checkin:;
- (void)resetIssuedFontsFor:;
- (void)requestFonts:reply:;
- (void)checkinForWebKitProcess:reply:;
- (void)fontChanged:reply:;
- (id)connection;
- (void).cxx_destruct;
- (void)scheduleFontFilesDeletion:;
- (void)setConnection:;
- (void)updatingUserFonts:;
- (void)resumeAndShowAlertForSuspendedFontProviders;
- (void)requestFonts:forClient:;
- (void)fontAddedInfo:addedURLStrings:removedURLStrings:;
- (void)checkinForFontPicker:;
- (void)synchronizeFontAssets:reply:;
+ (id)sharedManager;
@end
