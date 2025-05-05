@interface CSJUserMonitor : NSObject
@property (nonatomic) NSMutableDictionary userActionDictM;
- (id)userActionDictM;
- (void)click:;
- (id)dictionaryValue:;
- (void)resetWithSlotID:meta:;
- (void)setUserActionDictM:;
- (void)skipClick:;
- (void).cxx_destruct;
@end
