@interface DCSettings : NSObject
@property (nonatomic) NSUserDefaults userDefaults;
@property (nonatomic) BOOL enableViewService;
@property (nonatomic) BOOL finishAfterFirstScan;
@property (nonatomic) BOOL useDocumentSegmentationRequest;
- (void)setUserDefaults:;
- (id)init;
- (id)userDefaults;
- (void).cxx_destruct;
- (BOOL)enableViewService;
- (BOOL)finishAfterFirstScan;
- (BOOL)useDocumentSegmentationRequest;
- (id)enableViewServiceBoxed;
- (void)setEnableViewServiceBoxed:;
- (id)finishAfterFirstScanBoxed;
- (void)setFinishAfterFirstScanBoxed:;
- (id)useDocumentSegmentationRequestBoxed;
- (void)setUseDocumentSegmentationRequestBoxed:;
+ (id)sharedSettings;
@end
