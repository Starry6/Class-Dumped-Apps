@interface IESLiveIMUnifiedChannel : IESLiveIMMessageChannel
- (void)setupWithConfig:;
- (void)transport:received:;
@end
