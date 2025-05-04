@interface AWEIMMangoIncentiveChatBagTaskPollingManager : NSObject
@property (nonatomic) NSMutableDictionary taskDict;
- (void)cancelPollingWithIdentifier:;
- (void)setTaskDict:;
- (void)startIncentiveChtBagTaskPollingMGetRequestWithTaskID:taskToken:taskGroup:scene:;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (id)taskDict;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
