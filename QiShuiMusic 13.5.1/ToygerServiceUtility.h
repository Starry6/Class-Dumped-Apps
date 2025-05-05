@interface ToygerServiceUtility : NSObject
- (id)highFrequencySerialQueue;
- (BOOL)isMainQueue;
- (void)mainQueueExecute:;
- (id)operationSerialQueue;
- (id)init;
- (void)dealloc;
+ (id)sharedInstance;
@end
