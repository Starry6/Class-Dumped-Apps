@interface UASharedPasteboard : NSObject
@property (nonatomic) UASharedPasteboardManager manager;
- (id)manager;
- (void)setManager:;
- (id)currentRemoteDeviceName;
- (void)requestRemotePasteboardTypesForProcess:withCompletion:;
- (void)requestRemotePasteboardDataForProcess:withCompletion:;
- (BOOL)returnPasteboardDataBeforeArchives;
- (void)prefetchRemotePasteboardTypes:;
+ (void)clearLocalPasteboardInformation;
+ (void)startPreventingPasteboardSharing;
+ (void)stopPreventingPasteboardSharing;
+ (void)localPasteboardDidAddData:toItemAtIndex:generation:;
+ (void)localPasteboardDidAddItems:forGeneration:;
+ (void)localPasteboardDidPasteGeneration:;
+ (id)remotePasteboard;
@end
