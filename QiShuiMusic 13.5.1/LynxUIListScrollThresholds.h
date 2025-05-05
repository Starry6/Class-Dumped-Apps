@interface LynxUIListScrollThresholds : NSObject
@property (nonatomic) NSNumber scrollToStartOffset;
@property (nonatomic) NSNumber scrollToEndOffset;
@property (nonatomic) NSNumber scrollToStartItemCount;
@property (nonatomic) NSNumber scrollToEndItemCount;
@property (nonatomic) NSNumber throttle;
- (id)scrollToEndItemCount;
- (id)scrollToEndOffset;
- (id)scrollToStartItemCount;
- (id)scrollToStartOffset;
- (void)setScrollToEndItemCount:;
- (void)setScrollToEndOffset:;
- (void)setScrollToStartItemCount:;
- (void)setScrollToStartOffset:;
- (id)throttle;
- (void).cxx_destruct;
- (void)setThrottle:;
@end
