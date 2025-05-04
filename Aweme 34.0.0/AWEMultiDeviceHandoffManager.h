@interface AWEMultiDeviceHandoffManager : NSObject
@property (nonatomic) NSUserActivity userActivity;
@property (nonatomic) NSString timerIdentify;
@property (nonatomic) NSString scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)timerIdentify;
- (void)cancelHandoffWithTimeout;
- (void)setTimerIdentify:;
- (void)beginHandoffWithUrl:;
- (id)userActivity;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
- (void)userActivityWillSave:;
- (void)userActivityWasContinued:;
- (void)setUserActivity:;
+ (id)sharedInstance;
@end
