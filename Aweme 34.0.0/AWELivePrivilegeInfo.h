@interface AWELivePrivilegeInfo : AWEBaseApiModel
@property (nonatomic) q entityId;
@property (nonatomic) Q paidLiveType;
@property (nonatomic) AWELivePrivilegeBaseInfo paidLiveInfo;
@property (nonatomic) NSString extra;
@property (nonatomic) AWELivePrivilegeUrl privilegeURL;
@property (nonatomic) AWELivePaidLiveUIBaseConfig uiConfig;
@property (nonatomic) AWELivePaidLiveConfig entityConfig;
- (void)setExtra:;
- (id)uiConfig;
- (unsigned long long)paidLiveType;
- (void)setPaidLiveType:;
- (void)setUiConfig:;
- (id)entityConfig;
- (id)privilegeURL;
- (id)paidLiveInfo;
- (void)setPaidLiveInfo:;
- (void)setPrivilegeURL:;
- (void)setEntityConfig:;
- (id)extra;
- (void).cxx_destruct;
- (long long)entityId;
- (void)setEntityId:;
+ (id)uiConfigJSONTransformer;
+ (id)paidLiveInfoJSONTransformer;
+ (id)privilegeURLJSONTransformer;
+ (id)entityConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
