@interface AWEMVChannelScrollHelper : NSObject
@property (nonatomic) double velocity;
- (id)init;
- (void)setVelocity:;
- (double)velocity;
- (void)scrollViewWillBeginDragging:;
- (void).cxx_destruct;
- (void)scrollViewWillEndDragging:withVelocity:targetContentOffset:;
@end
