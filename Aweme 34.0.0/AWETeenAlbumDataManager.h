@interface AWETeenAlbumDataManager : NSObject
@property (nonatomic) NSString currentAlbumID;
@property (nonatomic) NSArray dataSource;
@property (nonatomic) AWETeenCustomDisplayViewController currentDisplayVC;
- (void)setCurrentAlbumID:;
- (id)currentAlbumID;
- (void)clearCurrentAlbumData;
- (id)currentDisplayVC;
- (void)setCurrentDisplayVC:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setDataSource:;
- (id)dataSource;
+ (id)sharedInstance;
@end
