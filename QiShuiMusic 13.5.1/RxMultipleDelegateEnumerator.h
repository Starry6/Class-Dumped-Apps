@interface RxMultipleDelegateEnumerator : NSObject
- (unsigned long long)countForSelector:;
- (BOOL)getNextDelegate:delegateQueue:;
- (BOOL)getNextDelegate:delegateQueue:forSelector:;
- (BOOL)getNextDelegate:delegateQueue:ofClass:;
- (id)initFromDelegateNodes:;
- (void).cxx_destruct;
- (unsigned long long)count;
- (unsigned long long)countOfClass:;
@end
