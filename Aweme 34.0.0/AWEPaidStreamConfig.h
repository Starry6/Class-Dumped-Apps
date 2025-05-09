@interface AWEPaidStreamConfig : NSObject
@property (nonatomic) AWEPaidStreamUIConfig uiConfig;
@property (nonatomic) AWEPaidAuthConfig authConfig;
@property (nonatomic) q paidScene;
@property (nonatomic) q paidChannel;
@property (nonatomic) Q paidLaunchSource;
@property (nonatomic) NSNumber authID;
@property (nonatomic) NSDictionary extraAuthParams;
@property (nonatomic) NSNumber roomID;
@property (nonatomic) NSNumber pingID;
@property (nonatomic) NSString customTrialPersistKey;
@property (nonatomic) NSString paidPanelURLString;
@property (nonatomic) @? paidPanelURLParamsHandler;
@property (nonatomic) double initialTrialTime;
@property (nonatomic) double maxTrialDuration;
@property (nonatomic) BOOL initialPaid;
@property (nonatomic) BOOL initialPromised;
@property (nonatomic) BOOL shouldManualPromise;
@property (nonatomic) BOOL forbidTimeForStreamStop;
@property (nonatomic) q screenCaptureMode;
@property (nonatomic) BOOL forbidBlock;
@property (nonatomic) BOOL forbidSecurity;
@property (nonatomic) NSString referString;
@property (nonatomic) BOOL needPreload;
- (id)referString;
- (void)setReferString:;
- (id)uiConfig;
- (id)authConfig;
- (void)setAuthConfig:;
- (BOOL)needPreload;
- (void)setNeedPreload:;
- (void)setUiConfig:;
- (long long)paidScene;
- (long long)paidChannel;
- (void)setForbidSecurity:;
- (id)paidPanelURLParamsHandler;
- (void)setPaidPanelURLParamsHandler:;
- (void)setPaidScene:;
- (void)setPaidChannel:;
- (void)setPingID:;
- (void)setPaidPanelURLString:;
- (void)setInitialTrialTime:;
- (void)setMaxTrialDuration:;
- (void)setInitialPaid:;
- (void)setInitialPromised:;
- (void)setShouldManualPromise:;
- (void)setPaidLaunchSource:;
- (void)setCustomTrialPersistKey:;
- (long long)screenCaptureMode;
- (double)maxTrialDuration;
- (unsigned long long)paidLaunchSource;
- (BOOL)isInitialPaid;
- (BOOL)isInitialPromised;
- (BOOL)isShouldManualPromise;
- (id)extraAuthParams;
- (void)setExtraAuthParams:;
- (id)pingID;
- (id)customTrialPersistKey;
- (id)paidPanelURLString;
- (double)initialTrialTime;
- (BOOL)forbidTimeForStreamStop;
- (void)setForbidTimeForStreamStop:;
- (void)setScreenCaptureMode:;
- (BOOL)forbidBlock;
- (void)setForbidBlock:;
- (BOOL)forbidSecurity;
- (id)roomID;
- (id)init;
- (void).cxx_destruct;
- (void)setRoomID:;
- (id)authID;
- (void)setAuthID:;
@end
