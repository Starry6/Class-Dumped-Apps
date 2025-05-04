@interface AWEDTOShootModel : MTLModel
@property (nonatomic) NSArray segment;
@property (nonatomic) AWEDTOShootPic2VideoInfo pic2videoText;
@property (nonatomic) NSString customizedPropId;
@property (nonatomic) NSString customizedBusinessExtra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pic2videoText;
- (void)setPic2videoText:;
- (id)customizedPropId;
- (void)setCustomizedPropId:;
- (id)customizedBusinessExtra;
- (void)setCustomizedBusinessExtra:;
- (id)segment;
- (void)setSegment:;
- (void).cxx_destruct;
+ (id)segmentJSONTransformer;
+ (id)pic2videoTextJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
