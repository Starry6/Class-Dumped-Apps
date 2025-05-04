@interface AWECorrelationItemManager : NSObject
@property (nonatomic) NSMutableArray albums;
@property (nonatomic) NSMutableArray deleteAlbums;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didEndWithResult:error:;
- (void)calibrateCorrelationAlbumItemWithItem:;
- (void)onAWEAwemeDeleteNotification:;
- (id)deleteAlbums;
- (void)setDeleteAlbums:;
- (id)albums;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setAlbums:;
+ (id)sharedManager;
@end
