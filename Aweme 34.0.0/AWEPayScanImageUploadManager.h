@interface AWEPayScanImageUploadManager : NSObject
@property (nonatomic) AWEPayScanImageUploader imageUploader;
@property (nonatomic) NSArray sellProductCodeList;
@property (nonatomic) CJPaySKMScanUploadConfig settingsConfig;
@property (nonatomic) BOOL isDebugOn;
- (id)settingsConfig;
- (void)setSettingsConfig:;
- (void)setImageUploader:;
- (id)imageUploader;
- (void)payDeskPreRequestDidFinishWithParams:;
- (void)setupDebug;
- (void)addAlogAndShowDebugToast:;
- (BOOL)isNeedUploadScanImage:;
- (void)startImageProgress:payInfo:scanInfo:;
- (id)handleImageToData:;
- (id)imageCropExpandSizeScale;
- (id)sellProductCodeList;
- (BOOL)isDebugOn;
- (void)setSellProductCodeList:;
- (void)setIsDebugOn:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
