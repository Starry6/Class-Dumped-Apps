@interface MADVIVisualSearchRegionAttributes : NSObject
@property (nonatomic) MADVIVisualSearchThirdPartyObject thirdPartyObject;
@property (nonatomic) NSString domain;
@property (nonatomic) NSString knowledgeGraphID;
@property (nonatomic) NSString title;
@property (nonatomic) NSURL thumbnailURL;
@property (nonatomic) float thumbnailAspectRatio;
@property (nonatomic) NSString shortDescription;
@property (nonatomic) NSString detailedDescription;
@property (nonatomic) NSURL webURL;
@property (nonatomic) NSDictionary knowledgeProperties;
- (id)shortDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)webURL;
- (id)domain;
- (id)detailedDescription;
- (id)thumbnailURL;
- (id)knowledgeGraphID;
- (id)knowledgeProperties;
- (void)setThirdPartyObject:;
- (id)initWithDomain:knowledgeGraphID:title:thumbnailURL:thumbnailAspectRatio:shortDescription:detailedDescription:webURL:knowledgeProperties:;
- (id)thirdPartyObject;
- (float)thumbnailAspectRatio;
+ (BOOL)supportsSecureCoding;
@end
