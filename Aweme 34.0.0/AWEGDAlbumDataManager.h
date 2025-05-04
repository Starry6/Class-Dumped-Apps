@interface AWEGDAlbumDataManager : NSObject
@property (nonatomic) NSMutableDictionary albumDataProcessors;
- (id)albumDataProcessors;
- (void)setupAlbumDataProcessor:productID:poiID:backendType:;
- (id)albumDataProcessor:;
- (void)setAlbumDataProcessors:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
