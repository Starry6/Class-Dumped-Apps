@interface MSVMultiCallback : NSObject
@property (nonatomic) Q count;
@property (nonatomic) NSArray callbacks;
@property (nonatomic) MSVCallback firstCallback;
@property (nonatomic) MSVCallback lastCallback;
- (id)init;
- (id)firstCallback;
- (BOOL)removeCallback:;
- (void)setLastCallback:;
- (void)setFirstCallback:;
- (id)callbacks;
- (void)invoke;
- (void)invokeWithObject:;
- (void)addCallback:;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)lastCallback;
@end
