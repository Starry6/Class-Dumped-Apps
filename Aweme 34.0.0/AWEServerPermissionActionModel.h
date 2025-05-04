@interface AWEServerPermissionActionModel : MTLModel
@property (nonatomic) q level;
@property (nonatomic) AWEServerPermissionFailedInfoModel failedInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)failedInfo;
- (void)setFailedInfo:;
- (void)setLevel:;
- (long long)level;
- (void).cxx_destruct;
+ (id)failedInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
