@interface AWEECTypeTracker : NSObject
@property (nonatomic) NSMutableSet reportSet;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isProductDetailPage:;
- (void)appendEntranceInfoWithModel:btmTrackerModel:scene:;
- (id)bcmBiz;
- (void)setReportSet:;
- (id)getGroupTypeInfoRawChain:;
- (void)reportAlogIfNeededForParams:;
- (id)getGroupTypeInfoRawChain:index:visitProductDetail:;
- (BOOL)isLiveInterruptPage:;
- (BOOL)isVideoInterruptPage:;
- (BOOL)isLiveOrVideoInterruptPage:;
- (BOOL)isSupportBackTrackingPage:;
- (BOOL)isOrderSubmitPage:;
- (BOOL)isSKUPage:;
- (BOOL)isProductExplainRecordPage:;
- (BOOL)isSchemaJumpPage:;
- (BOOL)isOtherEnableBackPage:;
- (id)reportSet;
- (void)reportAlogStartAt:;
- (id)init;
- (void).cxx_destruct;
@end
