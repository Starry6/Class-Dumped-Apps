@interface AWEAILoraProfileRouter : NSObject
@property (nonatomic) ACCAIGCLoraProfileModel infoModel;
@property (nonatomic) BOOL sameModelId;
- (id)infoModel;
- (void)setInfoModel:;
- (BOOL)sameModelId;
- (void)setSameModelId:;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)preLoadAIGCLibraryDataWith:;
+ (void)handleNoticeRouterWithParams:completion:;
+ (void)trackHandleClickNoticeWith:startTime:sameModelId:roleStatus:;
+ (void)realPresentLoraProfileDetailPage:enterScene:showStatus:isLoraUGC:;
+ (id)createDetailInfoVC:;
+ (void)realPresentAIGCLibraryPage:dismissBlock:;
+ (id)sharedInstance;
@end
