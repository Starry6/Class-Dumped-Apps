@interface AWEMRSubscribeManageDetailDataContext : NSObject
@property (nonatomic) BOOL useCache;
@property (nonatomic) AWECodeGenServiceAccountModel serviceAccountModel;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString serviceAccountId;
@property (nonatomic) NSString serviceAccountName;
@property (nonatomic) AWECodeGenServiceAccountModel serviceAccountCache;
@property (nonatomic) AWECodeGenServiceAccountModel serviceAccountOrigin;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)serviceAccountId;
- (void)setServiceAccountId:;
- (void)setServiceAccountModel:;
- (id)serviceAccountModel;
- (id)serviceAccountName;
- (void)updateCacheSubscribeStatusWithSubcategoryId:channelSubscribeInfos:;
- (id)serviceAccountCache;
- (void)configWithRouterParamsDictionary:;
- (void)setServiceAccountName:;
- (void)generateLocalCacheWithModel:;
- (void)setServiceAccountCache:;
- (void)setServiceAccountOrigin:;
- (void)updateCacheSubscribeStatus:;
- (void)updateCacheDisturbStatus:;
- (id)serviceAccountOrigin;
- (void).cxx_destruct;
- (void)setUseCache:;
- (BOOL)useCache;
@end
