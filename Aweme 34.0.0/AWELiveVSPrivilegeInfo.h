@interface AWELiveVSPrivilegeInfo : AWEBaseApiModel
@property (nonatomic) q entityId;
@property (nonatomic) AWELiveVSPrivilegeUrl privilegeURL;
@property (nonatomic) AWELiveVSPaidInfo paidInfo;
- (id)privilegeURL;
- (id)paidInfo;
- (void)setPrivilegeURL:;
- (void)setPaidInfo:;
- (void).cxx_destruct;
- (long long)entityId;
- (void)setEntityId:;
+ (id)privilegeURLJSONTransformer;
+ (id)paidInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
