@interface ML3ArtworkConfiguration : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> accessQueue;
@property (nonatomic) NSDictionary artworkConfigurationDictionary;
@property (nonatomic) NSMutableDictionary supportedSizesCache;
@property (nonatomic) double mainScreenScale;
- (void)setAccessQueue:;
- (id)accessQueue;
- (double)mainScreenScale;
- (void).cxx_destruct;
- (id)description;
- (id)initWithConfigurationDictionaries:;
- (id)supportedSizesForMediaType:artworkType:;
- (id)sizesToAutogenerateForMediaType:artworkType:;
- (id)_supportedSizeKeysForMediaType:artworkType:;
- (id)artworkConfigurationDictionary;
- (void)setArtworkConfigurationDictionary:;
- (id)supportedSizesCache;
- (void)setSupportedSizesCache:;
- (void)setMainScreenScale:;
+ (id)systemConfiguration;
@end
