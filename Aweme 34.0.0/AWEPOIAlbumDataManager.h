@interface AWEPOIAlbumDataManager : NSObject
@property (nonatomic) NSMutableDictionary albumDataProcessors;
- (id)albumDataProcessors;
- (id)albumDataProcessor:;
- (void)setAlbumDataProcessors:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
