@interface BLSPeekingEnumerator : NSEnumerator
- (id)nextObject;
- (void).cxx_destruct;
- (id)peekNextObject;
+ (id)peekingEnumeratorWithEnumerator:;
@end
