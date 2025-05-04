@interface AWEShareScrollWithoutDeleteDislikeStrategy : AWEShareDislikeStrategy
- (unsigned long long)methodType;
- (void)dislikeWithUser:shouldDelete:completion:;
- (void)dislikeStrategyBeforeRequestDislike;
@end
