@interface IESLiveMessageListPriorityQueue : NSObject
@property (nonatomic) NSMutableArray lowPriorityArray;
@property (nonatomic) NSMutableArray middlePriorityArray;
@property (nonatomic) NSMutableArray highPriorityArray;
@property (nonatomic) BOOL enableHighPriorityStratery;
@property (nonatomic) BOOL enableLowPriorityStratery;
@property (nonatomic) q highPriorityCount;
@property (nonatomic) q lowPriorityCount;
- (BOOL)enableHighPriorityStratery;
- (BOOL)enableLowPriorityStratery;
- (id)highPriorityArray;
- (long long)highPriorityCount;
- (double)localTimeStampWith:;
- (id)lowPriorityArray;
- (long long)lowPriorityCount;
- (id)middlePriorityArray;
- (id)popObjectsByStrategyWithCount:needReverse:;
- (id)popObjectsFromArray:count:;
- (id)popObjectsInTimeOrderWithArrays:count:;
- (id)popObjectsInTimeOrderWithCount:needReverse:;
- (void)pushObject:withPriority:;
- (void)setEnableHighPriorityStratery:;
- (void)setEnableLowPriorityStratery:;
- (void)setHighPriorityArray:;
- (void)setHighPriorityCount:;
- (void)setLowPriorityArray:;
- (void)setLowPriorityCount:;
- (void)setMiddlePriorityArray:;
- (id)init;
- (BOOL)isEmpty;
- (void)clear;
- (void).cxx_destruct;
- (id)allObjects;
- (long long)count;
@end
