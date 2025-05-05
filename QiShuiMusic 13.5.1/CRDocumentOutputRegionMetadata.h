@interface CRDocumentOutputRegionMetadata : NSObject
@property (nonatomic) Q numFilteredRegions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:;
- (unsigned long long)numFilteredRegions;
- (void)setNumFilteredRegions:;
@end
