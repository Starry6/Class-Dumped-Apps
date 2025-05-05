@interface NSURLQueue : NSObject
- (id)init;
- (BOOL)isEmpty;
- (void)dealloc;
- (id)peek;
- (BOOL)remove:;
- (void)clear;
- (unsigned long long)count;
- (void)put:;
- (id)take;
- (id)peekAt:;
- (long long)indexOf:;
- (BOOL)waitOnTake;
- (void)setWaitOnTake:;
+ (id)newNode;
@end
