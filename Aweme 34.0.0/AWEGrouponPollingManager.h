@interface AWEGrouponPollingManager : NSObject
@property (nonatomic) NSMutableDictionary taskDict;
- (void)startPollingWithIdentifier:interval:apiPath:reqParams:pollingLimit:;
- (void)cancelPollingWithIdentifier:;
- (void)setTaskDict:;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (id)taskDict;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
