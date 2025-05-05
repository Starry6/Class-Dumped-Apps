@interface GEOGeographicMetadataTileFetcher : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchMetadataWithResponseQueue:block:;
- (void).cxx_destruct;
- (void)reportCorrupt:;
- (id)initForTileStyle:location:options:;
@end
