@interface PuzzleLatchMonitor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reportCustomWithEventName:containerId:url:lynxView:metric:category:extra:maySample:;
- (void)reportCustomWithEventName:url:lynxView:metric:category:extra:maySample:;
@end
