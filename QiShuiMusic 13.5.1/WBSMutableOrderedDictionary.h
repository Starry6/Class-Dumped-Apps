@interface WBSMutableOrderedDictionary : NSObject
@property (nonatomic) NSArray orderedKeys;
@property (nonatomic) NSArray orderedValues;
- (id)init;
- (void)setObject:forKey:;
- (void)setObject:forKeyedSubscript:;
- (void)removeObjectsForKeys:;
- (id)objectForKeyedSubscript:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)removeObjectForKey:;
- (id)orderedKeys;
- (id)initWithMaximumCount:;
- (id)orderedValues;
@end
