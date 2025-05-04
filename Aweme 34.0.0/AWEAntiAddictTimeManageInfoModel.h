@interface AWEAntiAddictTimeManageInfoModel : MTLModel
@property (nonatomic) q remindToRest;
@property (nonatomic) q remindToSleep;
@property (nonatomic) q addictRemindState;
@property (nonatomic) q delayRemindTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)remindToRest;
- (long long)delayRemindTime;
- (long long)addictRemindState;
- (void)setAddictRemindState:;
- (void)setRemindToRest:;
- (void)setRemindToSleep:;
- (long long)remindToSleep;
- (void)setDelayRemindTime:;
- (void)private_setAddictRemindState:;
- (void)private_setRemindToRest:;
- (void)private_setRemindToSleep:;
- (void)private_setDelayRemindTime:;
- (id)initWithRemindToRest:remindToSleep:addictRemindState:;
+ (id)JSONKeyPathsByPropertyKey;
@end
