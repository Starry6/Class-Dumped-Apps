@interface AWEPOIDetailPhotosPreviewViewControllerConfiguration : AWEPOIDetailPhotosPreviewBaseConfiguration
@property (nonatomic) BOOL showReportEntrance;
@property (nonatomic) NSString reportSchema;
@property (nonatomic) BOOL showUploadEntrance;
@property (nonatomic) @? gotoUploadBlock;
@property (nonatomic) NSArray photos;
@property (nonatomic) BOOL showCloseButton;
@property (nonatomic) q actualTotalCount;
- (id)reportSchema;
- (void)setReportSchema:;
- (BOOL)showReportEntrance;
- (void)setShowReportEntrance:;
- (BOOL)showUploadEntrance;
- (void)setShowUploadEntrance:;
- (id)gotoUploadBlock;
- (void)setGotoUploadBlock:;
- (long long)actualTotalCount;
- (void)setActualTotalCount:;
- (void).cxx_destruct;
- (BOOL)showCloseButton;
- (void)setShowCloseButton:;
@end
