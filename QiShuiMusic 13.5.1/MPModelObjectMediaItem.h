@interface MPModelObjectMediaItem : MPNondurableMediaItem
@property (nonatomic) MPModelObject modelObject;
@property (nonatomic) @? fallbackArtworkCatalogBlock;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)valueForProperty:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (unsigned long long)persistentID;
- (id)modelObject;
- (id)initWithPersistentID:;
- (id)initWithModelObject:;
- (id)fallbackArtworkCatalogBlock;
- (void)setFallbackArtworkCatalogBlock:;
+ (BOOL)supportsSecureCoding;
@end
