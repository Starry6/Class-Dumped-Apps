@interface AWEIMEmoticonResouceModel : IESIMBaseApiModel
@property (nonatomic) q resourceId;
@property (nonatomic) q createTime;
@property (nonatomic) q updateTime;
@property (nonatomic) NSString md5;
@property (nonatomic) NSString resourceUrl;
- (long long)resourceId;
- (void)setResourceId:;
- (long long)createTime;
- (void).cxx_destruct;
- (void)setCreateTime:;
- (long long)updateTime;
- (void)setUpdateTime:;
- (id)md5;
- (void)setMd5:;
- (id)resourceUrl;
- (void)setResourceUrl:;
+ (id)JSONKeyPathsByPropertyKey;
@end
