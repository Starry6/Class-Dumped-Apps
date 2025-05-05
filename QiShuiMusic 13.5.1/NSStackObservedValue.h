@interface NSStackObservedValue : NSObservedValue
- (void)setFinished:;
- (void)setError:;
- (id)autorelease;
- (id)release;
- (void)setValue:;
- (id)retain;
- (unsigned long long)retainCount;
@end
