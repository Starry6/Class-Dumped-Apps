@interface GEOEnrichmentInfo : NSObject
@property (nonatomic) NSString sourceName;
@property (nonatomic) NSString sourceId;
@property (nonatomic) NSString showcaseId;
- (id)sourceName;
- (void).cxx_destruct;
- (id)description;
- (id)sourceId;
- (id)showcaseId;
- (BOOL)isEqual:;
- (id)initWithEnrichmentInfo:;
- (id)pdEnrichmentInfo;
@end
