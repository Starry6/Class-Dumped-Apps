@interface RACEagerSequence : RACArraySequence
- (id)eagerSequence;
- (id)foldRightWithStart:reduce:;
- (id)lazySequence;
- (id)concat:;
- (id)bind:;
+ (id)return:;
@end
