@interface ISLivePhotoSettleBehavior : ISBehavior
@property (nonatomic) <ISLivePhotoSettleBehaviorDelegate> delegate;
- (void)_didFinish;
- (long long)behaviorType;
- (void)settle:;
@end
