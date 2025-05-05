@interface TEIOSAppStatusNotifierHelper : NSObject
@property (nonatomic) {function<void (TEAppStatus)>={__value_func<void (TEAppStatus)>={type=[24C]}^v}} changeBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStatusListener:;
- (void)becomeActive;
- (void)dealloc;
- (void)registerNotifications;
- (void)enterBackground;
- (void).cxx_destruct;
- (void)enterForeground;
- (id).cxx_construct;
- (void)resignActive;
- (void)memoryWarning;
- (id)changeBlock;
- (void)setChangeBlock:;
@end
