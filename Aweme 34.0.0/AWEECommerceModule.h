@interface AWEECommerceModule : NSObject
@property (nonatomic) BOOL isOpenFromOtherApp;
@property (nonatomic) BOOL isOpenOtherApp;
@property (nonatomic) NSDictionary trackParamForOpenOtherApp;
@property (nonatomic) double openAppRecordTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onAppDidBecomeActive;
- (BOOL)onHandleAppOpenUrl;
- (BOOL)onHandleAppContinueUserActivity;
- (void)setIsOpenOtherApp:;
- (void)setTrackParamForOpenOtherApp:;
- (void)setOpenAppRecordTime:;
- (void)setIsOpenFromOtherApp:;
- (BOOL)isOpenOtherApp;
- (id)trackParamForOpenOtherApp;
- (BOOL)isOpenFromOtherApp;
- (double)openAppRecordTime;
- (void)resetParam;
- (BOOL)canHandleLiveActivity;
- (void).cxx_destruct;
+ (id)ecommerceModule;
+ (unsigned long long)priority;
@end
