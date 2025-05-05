@interface IESLiveCombineSubject : IESLivePublisher
- (void)sendVoid;
- (void)sendValue:;
- (void)sendCompletion;
+ (id)currentValueSubject;
+ (id)passthroughSubject;
+ (id)subject;
@end
