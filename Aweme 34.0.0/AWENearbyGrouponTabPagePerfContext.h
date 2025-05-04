@interface AWENearbyGrouponTabPagePerfContext : NSObject
@property (nonatomic) double startTs;
@property (nonatomic) double endUpdateTs;
@property (nonatomic) double endReloadTs;
- (double)startTs;
- (void)setStartTs:;
- (double)endUpdateTs;
- (void)setEndUpdateTs:;
- (double)endReloadTs;
- (void)setEndReloadTs:;
@end
