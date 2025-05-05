@interface GEOResultRefinementSortElement : NSObject
@property (nonatomic) NSString displayName;
@property (nonatomic) GEOPDResultRefinementMetadata metadata;
- (id)metadata;
- (void)setDisplayName:;
- (id)displayName;
- (void)setMetadata:;
- (void).cxx_destruct;
- (id)initWithDisplayName:metadata:;
- (id)initWithResultRefinementSortElement:;
- (id)convertToGEOPDResultRefinementSortElement;
@end
