@interface AWEOPRealNameINCTrackerManager : NSObject
@property (nonatomic) NSString clientKey;
@property (nonatomic) NSString clientName;
@property (nonatomic) NSString clientAppType;
- (id)commonParams;
- (id)clientAppType;
- (void)setClientAppType:;
- (void)reportAuthRealInfoPopupResult:errorCode:errMsg:;
- (void)initWithClientKey:ClientName:ClientAppType:;
- (void)reportAuthRealInfoPopupShow:;
- (void)reportAuthRealInfoPopupClick:buttonType:;
- (void)setClientName:;
- (id)clientKey;
- (id)clientName;
- (void)setClientKey:;
- (void).cxx_destruct;
+ (id)shareManager;
@end
