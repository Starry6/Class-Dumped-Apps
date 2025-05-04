@interface AWECommerceAnchorListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray anchorList;
@property (nonatomic) NSArray AIAnchorList;
@property (nonatomic) NSString registerRegion;
- (id)anchorList;
- (void)setAnchorList:;
- (id)AIAnchorList;
- (void)setAIAnchorList:;
- (id)registerRegion;
- (void)setRegisterRegion:;
- (void).cxx_destruct;
+ (id)anchorListJSONTransformer;
+ (id)AIAnchorListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
