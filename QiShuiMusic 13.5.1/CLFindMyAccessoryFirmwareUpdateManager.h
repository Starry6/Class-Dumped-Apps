@interface CLFindMyAccessoryFirmwareUpdateManager : NSObject
@property (nonatomic) <CLFindMyAccessoryFirmwareUpdateDelegate> delegate;
- (id)init;
- (id)initWithDelegate:delegateQueue:;
- (void)handleMessage:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)handleInterruption;
- (id).cxx_construct;
- (void)getPersonalizationInfoForDevice:;
- (void)updateFirmwareForDevice:withAssetURL:;
- (void)abortFirmwareUpdateForDevice:;
- (void)useLocalFirmwareAssetFromURL:forProductGroup:forProductNumber:withSandboxExtension:;
- (void)useDefaultFirmwareAssetSourceForProductGroup:andProductNumber:;
- (void)fetchWhetherLocalFirmwareAssetIsInUseForProductGroup:andProductNumber:;
@end
