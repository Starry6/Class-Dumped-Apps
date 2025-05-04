@interface AWEIMIncentiveChatRelationProgressCoolDownStatus : NSObject
@property (nonatomic) q status;
@property (nonatomic) q triggerTime;
@property (nonatomic) q terminateTime;
@property (nonatomic) NSDictionary extra;
- (void)setExtra:;
- (long long)triggerTime;
- (void)setTriggerTime:;
- (long long)terminateTime;
- (id)coolDownImageURLString;
- (void)setTerminateTime:;
- (void)setStatus:;
- (id)extra;
- (void).cxx_destruct;
- (long long)status;
- (BOOL)isEqual:;
- (id)initWithDictionary:;
@end
