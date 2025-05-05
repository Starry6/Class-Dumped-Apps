@interface GEOEnrichmentData : NSObject
@property (nonatomic) NSArray enrichmentEntities;
@property (nonatomic) NSData placecardEnrichmentMetadata;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithEnrichmentData:;
- (id)enrichmentEntities;
- (id)placecardEnrichmentMetadata;
@end
