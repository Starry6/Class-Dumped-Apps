@interface AWERecordBeautyDownloaderConfig : NSObject
@property (nonatomic) NSString panelName;
@property (nonatomic) NSString defaultPanelName;
@property (nonatomic) BOOL saveCache;
@property (nonatomic) q effectTestStatusType;
@property (nonatomic) q maxConcurrentOperationCount;
@property (nonatomic) BOOL enablePanelRequestOpt;
@property (nonatomic) q abGroup;
- (BOOL)enablePanelRequestOpt;
- (long long)effectTestStatusType;
- (id)defaultPanelName;
- (void)setDefaultPanelName:;
- (void)setSaveCache:;
- (void)setEffectTestStatusType:;
- (void)setEnablePanelRequestOpt:;
- (long long)abGroup;
- (id)init;
- (BOOL)saveCache;
- (void).cxx_destruct;
- (void)setAbGroup:;
- (void)setMaxConcurrentOperationCount:;
- (long long)maxConcurrentOperationCount;
- (id)panelName;
- (void)setPanelName:;
@end
