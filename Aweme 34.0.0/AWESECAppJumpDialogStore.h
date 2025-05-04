@interface AWESECAppJumpDialogStore : NSObject
@property (nonatomic) <AWEStorageServiceKVInterface> store;
@property (nonatomic) AWESECAppJumpDialog currentShowDialog;
@property (nonatomic) DUXLoadingToast currentLoadingToast;
- (id)currentShowDialog;
- (void)setCurrentShowDialog:;
- (void)clearEventInDisk;
- (void)dialogTrack:;
- (void)eventAppLogTrack:;
- (void)checkLatestEventAndReport;
- (id)currentLoadingToast;
- (void)setCurrentLoadingToast:;
- (id)init;
- (id)store;
- (void)setStore:;
- (void).cxx_destruct;
- (void)saveEventToDisk:;
+ (id)shared;
@end
