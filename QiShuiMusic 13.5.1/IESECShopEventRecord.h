@interface IESECShopEventRecord : NSObject
@property (nonatomic) Q tabType;
@property (nonatomic) NSMutableArray events;
@property (nonatomic) double scrollOffset;
- (unsigned long long)tabType;
- (id)initWithTabType:;
- (void)setTabType:;
- (double)scrollOffset;
- (void)setEvents:;
- (void).cxx_destruct;
- (id)events;
- (void)setScrollOffset:;
@end
