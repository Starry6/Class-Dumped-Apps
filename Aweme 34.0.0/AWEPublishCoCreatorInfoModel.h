@interface AWEPublishCoCreatorInfoModel : AWEBaseApiModel
@property (nonatomic) NSArray cocreatorInfos;
@property (nonatomic) AWECoCreatorSerachExtraModel extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (id)cocreatorInfos;
- (void)setCocreatorInfos:;
- (id)extra;
- (void).cxx_destruct;
+ (id)cocreatorInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
