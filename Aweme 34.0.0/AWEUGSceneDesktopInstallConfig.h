@interface AWEUGSceneDesktopInstallConfig : NSObject
@property (nonatomic) NSDictionary installTypeViewTypeMap;
- (id)handleInstallConfigData:;
- (id)installTypeViewTypeMap;
- (id)handleVideoGuideData:;
- (id)handleShortcutGuideData:;
- (id)handlePIPGuideData:;
- (void)setInstallTypeViewTypeMap:;
- (id)init;
- (void).cxx_destruct;
@end
