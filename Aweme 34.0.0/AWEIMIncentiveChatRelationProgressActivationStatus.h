@interface AWEIMIncentiveChatRelationProgressActivationStatus : NSObject
@property (nonatomic) q status;
@property (nonatomic) q triggerTime;
@property (nonatomic) q terminateTime;
@property (nonatomic) NSDictionary rawData;
- (long long)triggerTime;
- (void)setTriggerTime:;
- (long long)terminateTime;
- (void)setTerminateTime:;
- (void)setStatus:;
- (void)setRawData:;
- (void).cxx_destruct;
- (long long)status;
- (BOOL)isEqual:;
- (id)initWithDictionary:;
- (id)rawData;
@end
