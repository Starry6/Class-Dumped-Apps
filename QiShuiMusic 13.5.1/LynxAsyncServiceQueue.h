@interface LynxAsyncServiceQueue : NSOperationQueue
@property (nonatomic) LynxThreadSafeDictionary operationDic;
- (void)addOperation:withIdentify:;
- (id)operationDic;
- (id)operationWithIdentify:;
- (void)setOperationDic:;
- (id)init;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
@end
