@interface AWEPlaylistDetailViewModel : NSObject
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) double headerHeight;
@property (nonatomic) double musicHeaderHeight;
@property (nonatomic) double musicCellHeight;
@property (nonatomic) BOOL networkReachable;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (double)musicCellHeight;
- (double)musicHeaderHeight;
- (double)headerHeight;
- (BOOL)networkReachable;
+ (id)storage;
@end
