@interface AWEIMSortedSocialNetworkInfoModel : MTLModel
@property (nonatomic) NSArray socialNetworkInfos;
@property (nonatomic) BOOL needUpdate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)needUpdate;
- (void)setNeedUpdate:;
- (id)socialNetworkInfos;
- (void)setSocialNetworkInfos:;
- (void).cxx_destruct;
+ (id)socialNetworkInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
