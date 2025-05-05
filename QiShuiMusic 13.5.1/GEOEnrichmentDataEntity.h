@interface GEOEnrichmentDataEntity : NSObject
@property (nonatomic) GEOEnrichmentInfo enrichmentInfo;
@property (nonatomic) NSString enrichmentHtml;
@property (nonatomic) NSData enrichmentMetadata;
@property (nonatomic) NSArray appAdamIds;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)enrichmentInfo;
- (id)appAdamIds;
- (id)initWithEnrichmentDataEntity:;
- (id)enrichmentHtml;
- (id)enrichmentMetadata;
@end
