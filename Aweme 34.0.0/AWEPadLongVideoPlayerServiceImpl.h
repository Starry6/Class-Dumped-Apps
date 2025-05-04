@interface AWEPadLongVideoPlayerServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)transitionOptimizeEnableWithContext:;
- (void)performLongVideoOptimizeBlock:;
- (BOOL)seekToHistoryWhenContainerRotatingWithContext:;
+ (id)sharedInstance;
@end
