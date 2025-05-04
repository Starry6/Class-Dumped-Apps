@interface AWESearchDynamicIdleTask : NSObject
@property (nonatomic) NSString sessionID;
@property (nonatomic) NSString uniqueKey;
@property (nonatomic) q priority;
@property (nonatomic) NSString identify;
@property (nonatomic) <AWESearchDynamicIdleTaskDelegate> delegate;
- (void)setSessionID:;
- (id)uniqueKey;
- (void)run;
- (id)delegate;
- (long long)priority;
- (id)sessionID;
- (void)setPriority:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setUniqueKey:;
- (void)cancelWithReason:;
- (id)identify;
- (void)setIdentify:;
+ (id)taskWithSessionID:uniqueKey:priority:;
+ (id)formatIdentifyFromSessionID:uniqueKey:;
@end
