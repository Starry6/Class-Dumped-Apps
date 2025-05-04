@interface AWEDataLayerDatabaseQueue : NSObject
- (void)after:executeBlock:;
- (void)asyncExecuteBlock:;
- (void).cxx_destruct;
+ (id)queueWithIdentifier:;
@end
