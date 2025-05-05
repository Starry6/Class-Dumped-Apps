@interface TLToneStoreDownloadStoreServicesController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString storeAccountName;
- (void)removeObserver:;
- (id)storeAccountName;
- (void)downloadManager:downloadStatesDidChange:;
- (id)init;
- (void)addObserver:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_performBlockOnAccessQueue:;
- (void)_assertRunningOnAccessQueue;
- (void)purchaseManager:didFinishPurchasesWithResponses:;
- (void)_handleAccountStoreDidChangeNotification:;
- (void)_handleToneManagerContentsDidChangeNotification:;
- (void)openAlertToneStore;
- (void)openRingtoneStore;
- (void)redownloadAllTones;
- (void)_updateStoreAccountName;
- (void)_notifyObserversOfUpdatedStoreAccountName:;
- (void)_notifyObserversOfCheckingForDownloadsFinishedWithoutNeedToIssueAnyDownload;
- (void)_notifyObserversOfStartedToneStoreDownloads:progressedToneStoreDownload:finishedToneStoreDownloads:;
- (void)_openToneStoreWithStoreItemKind:;
@end
