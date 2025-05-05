@interface MPArtworkConfiguration : NSObject
@property (nonatomic) ML3ArtworkConfiguration artworkConfiguration;
- (void).cxx_destruct;
- (id)description;
- (id)initWithConfigurationDictionaries:;
- (id)supportedSizesForMediaType:artworkType:;
- (id)sizesToAutogenerateForMediaType:artworkType:;
- (id)artworkConfiguration;
- (void)setArtworkConfiguration:;
+ (id)systemConfiguration;
@end
