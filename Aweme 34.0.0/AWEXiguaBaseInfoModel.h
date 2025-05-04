@interface AWEXiguaBaseInfoModel : MTLModel
@property (nonatomic) q status;
@property (nonatomic) NSString xiguaStarAtlasOrderId;
@property (nonatomic) BOOL isXiguaStarAtlasVideo;
@property (nonatomic) q xiguaPrivacyType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)xiguaPrivacyType;
- (void)setXiguaPrivacyType:;
- (BOOL)isValidStatus;
- (id)xiguaStarAtlasOrderId;
- (void)setXiguaStarAtlasOrderId:;
- (BOOL)isXiguaStarAtlasVideo;
- (void)setIsXiguaStarAtlasVideo:;
- (void)setStatus:;
- (void).cxx_destruct;
- (long long)status;
+ (id)JSONKeyPathsByPropertyKey;
@end
