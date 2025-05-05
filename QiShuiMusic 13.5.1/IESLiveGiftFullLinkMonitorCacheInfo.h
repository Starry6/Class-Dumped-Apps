@interface IESLiveGiftFullLinkMonitorCacheInfo : NSObject
@property (nonatomic) Q eventType;
@property (nonatomic) Q linkType;
- (BOOL)isContentDiscarded;
- (unsigned long long)eventType;
- (void)setLinkType:;
- (void)setEventType:;
- (void)endContentAccess;
- (void)discardContentIfPossible;
- (BOOL)beginContentAccess;
- (unsigned long long)linkType;
@end
