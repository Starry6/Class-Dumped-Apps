@interface IESECShopMediaInfoModel : MTLModel
@property (nonatomic) IESECRelationLiveInfoModel liveInfo;
@property (nonatomic) NSArray videoInfos;
@property (nonatomic) q showType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)liveInfo;
- (void)setLiveInfo:;
- (void)setVideoInfos:;
- (id)videoInfos;
- (void).cxx_destruct;
- (long long)showType;
- (void)setShowType:;
+ (id)videoInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
