@interface EKDataProtectionObserver : NSObject
@property (nonatomic) CDBDataProtectionObserver dataProtectionObserver;
@property (nonatomic) @? stateChangedCallback;
@property (nonatomic) BOOL dataIsAccessible;
- (id)init;
- (void)_dataProtectionStateChanged;
- (void)setDataProtectionObserver:;
- (BOOL)dataIsAccessible;
- (id)stateChangedCallback;
- (id)dataProtectionObserver;
- (void).cxx_destruct;
- (void)setStateChangedCallback:;
+ (id)stateChangedNotificationName;
@end
