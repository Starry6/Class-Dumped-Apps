@interface IGListWorkingRangeHandler : NSObject
@property (nonatomic) q workingRangeSize;
- (void)_updateWorkingRangesWithListAdapter:;
- (void)didEndDisplayingItemAtIndexPath:forListAdapter:;
- (id)initWithWorkingRangeSize:;
- (void)willDisplayItemAtIndexPath:forListAdapter:;
- (long long)workingRangeSize;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
