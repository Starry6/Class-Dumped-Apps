@interface AWEMRSubscribeSetRequestModel : NSObject
@property (nonatomic) NSString serviceAccountId;
@property (nonatomic) NSNumber serviceAccountSubscribeStatus;
@property (nonatomic) NSNumber disturbStatus;
@property (nonatomic) NSArray subcategorySubscribeInfos;
- (id)serviceAccountId;
- (void)setServiceAccountId:;
- (id)disturbStatus;
- (void)setDisturbStatus:;
- (id)subcategorySubscribeInfos;
- (void)setSubcategorySubscribeInfos:;
- (void)setServiceAccountSubscribeStatus:;
- (id)serviceAccountSubscribeStatus;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
