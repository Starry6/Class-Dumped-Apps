@interface SiriAnalyticsLargeMessageStorage : NSObject
- (id)initWithApplicationIdentifier:;
- (void).cxx_destruct;
- (void)enqueueLargeMessageObjectFromPath:messageWrapper:completion:;
@end
