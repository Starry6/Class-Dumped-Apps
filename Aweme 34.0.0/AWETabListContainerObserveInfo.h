@interface AWETabListContainerObserveInfo : NSObject
@property (nonatomic) @? panStateChangeBlock;
@property (nonatomic) @? contentOffsetChangeBlock;
- (void)setPanStateChangeBlock:;
- (void)setContentOffsetChangeBlock:;
- (id)contentOffsetChangeBlock;
- (id)panStateChangeBlock;
- (void).cxx_destruct;
+ (id)info;
@end
