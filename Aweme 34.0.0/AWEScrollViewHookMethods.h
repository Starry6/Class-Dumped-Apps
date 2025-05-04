@interface AWEScrollViewHookMethods : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)perf_isa_scrollViewWillBeginDragging:;
- (void)perf_isa_scrollViewDidEndDragging:willDecelerate:;
- (void)perf_isa_scrollViewDidEndDecelerating:;
+ (BOOL)hookScrollViewDelegate:;
@end
