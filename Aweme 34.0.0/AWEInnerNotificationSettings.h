@interface AWEInnerNotificationSettings : NSObject
@property (nonatomic) BOOL enableValidateBlockCondition;
@property (nonatomic) BOOL enableLoopBlockCheck;
@property (nonatomic) BOOL appStateDependency;
@property (nonatomic) BOOL useHigherPriorityQueue;
- (BOOL)useHigherPriorityQueue;
- (BOOL)appStateDependency;
- (BOOL)enableLoopBlockCheck;
- (BOOL)enableValidateBlockCondition;
- (id)initWithDictionary:;
@end
