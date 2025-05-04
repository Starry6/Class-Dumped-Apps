@interface AWEDoubleColumnSearchMerchandiseUserInfoModel : AWEBaseApiModel
@property (nonatomic) AWEUserModel userInfo;
@property (nonatomic) NSArray product;
@property (nonatomic) AWESearchECommerceInfoModel commerceInfo;
@property (nonatomic) AWEAwemeModel liveInfo;
@property (nonatomic) AWELiveAnnouncement liveAnnouncement;
@property (nonatomic) NSArray userServiceInfo;
@property (nonatomic) NSArray userServiceLogInfo;
- (id)liveInfo;
- (void)setLiveInfo:;
- (id)userServiceLogInfo;
- (void)setUserServiceLogInfo:;
- (id)commerceInfo;
- (id)userServiceInfo;
- (void)setUserServiceInfo:;
- (id)liveAnnouncement;
- (void)setLiveAnnouncement:;
- (void)setUserInfo:;
- (id)userInfo;
- (void).cxx_destruct;
- (id)product;
- (void)setProduct:;
- (void)setCommerceInfo:;
+ (id)userInfoJSONTransformer;
+ (id)productJSONTransformer;
+ (id)userServiceInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)liveInfoJSONTransformer;
@end
