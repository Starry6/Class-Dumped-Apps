@interface AWEProfileExtensionAreaMyContractShowDotManager : NSObject
@property (nonatomic) NSMutableDictionary eventMap;
@property (nonatomic) NSMutableDictionary consumedEventMap;
@property (nonatomic) NSMutableDictionary timeMap;
- (id)timeMap;
- (void)setTimeMap:;
- (void)setEventMap:;
- (id)eventMap;
- (void)setConsumedEventMap:;
- (id)consumedEventMap;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
