@interface VIRegionOfInterestResultItem : NSObject
@property (nonatomic) NSString domain;
@property (nonatomic) VIObjectCategory objectCategory;
@property (nonatomic) VIOntologyNode ontologyNode;
@property (nonatomic) VIObjectKnowledge objectKnowledge;
@property (nonatomic) VIThirdPartyObject thirdPartyObject;
- (void).cxx_destruct;
- (id)domain;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)objectKnowledge;
- (id)ontologyNode;
- (id)thirdPartyObject;
- (id)initWithDomain:thirdPartyObject:ontologyNode:objectKnowledge:;
- (id)objectCategory;
@end
