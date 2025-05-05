@interface IESAppLogger : NSObject
@property (nonatomic) BOOL initFlag;
@property (nonatomic) BOOL isAbroad;
@property (nonatomic) NSString appId;
@property (nonatomic) @? appLogTrackerBlock;
- (void)appLogOnEvent:params:eventType:;
- (void)appLogOnEvent:params:eventType:uploadToBusiness:;
- (id)appLogTrackerBlock;
- (BOOL)initFlag;
- (BOOL)isAbroad;
- (void)setAppLogCallback:callback:isAbroad:;
- (void)setAppLogTrackerBlock:;
- (void)setInitFlag:;
- (void)setIsAbroad:;
- (id)appId;
- (void)setAppId:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
