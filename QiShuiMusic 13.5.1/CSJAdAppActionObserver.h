@interface CSJAdAppActionObserver : NSObject
@property (nonatomic) NSNotification openURLNoti;
- (void)addNoti;
- (void)appStoreControllerDidDisappear:;
- (void)setOpenURLNoti:;
- (void)appStoreBackWithOpenURL:;
- (void)appStoreWithOpenURL:;
- (void)appStoreWithSKStore:;
- (id)openURLNoti;
- (void)uploadDuration:type:tag:label:adExtraData:;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)shareInstance;
@end
