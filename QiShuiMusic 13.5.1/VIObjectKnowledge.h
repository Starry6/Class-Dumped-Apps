@interface VIObjectKnowledge : NSObject
@property (nonatomic) NSString knowledgeGraphID;
@property (nonatomic) NSString title;
@property (nonatomic) NSURL thumbnailURL;
@property (nonatomic) float thumbnailAspectRatio;
@property (nonatomic) NSString shortDescription;
@property (nonatomic) NSString detailedDescription;
@property (nonatomic) NSURL webURL;
@property (nonatomic) NSArray knowledgeProperties;
@property (nonatomic) q serializedDomainType;
@property (nonatomic) NSData serializedDomainResponse;
- (id)shortDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)webURL;
- (id)detailedDescription;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)thumbnailURL;
- (id)knowledgeGraphID;
- (id)knowledgeProperties;
- (float)thumbnailAspectRatio;
- (id)initWithKnowledgeGraphID:title:thumbnailURL:thumbnailAspectRatio:shortDescription:detailedDescription:webURL:knowledgeProperties:serializedDomainType:serializedDomainResponse:;
- (long long)serializedDomainType;
- (id)serializedDomainResponse;
+ (BOOL)supportsSecureCoding;
@end
