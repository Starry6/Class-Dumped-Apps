@interface AWEDTOCreativeResolutionInstanceModel : MTLModel
@property (nonatomic) AWEDTOCreativeResolutionSizeModel sourceResolution;
@property (nonatomic) AWEDTOCreativeResolutionSizeModel originResolution;
@property (nonatomic) NSString creationId;
@property (nonatomic) NSString uuid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)creationId;
- (void)setCreationId:;
- (id)sourceResolution;
- (void)setSourceResolution:;
- (id)originResolution;
- (void)setOriginResolution:;
- (id)uuid;
- (void)setUuid:;
- (void).cxx_destruct;
+ (id)sourceResolutionJSONTransformer;
+ (id)originResolutionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
