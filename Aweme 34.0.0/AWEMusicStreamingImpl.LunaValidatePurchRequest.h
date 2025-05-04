@interface AWEMusicStreamingImpl.LunaValidatePurchRequest : AWEMusicStreamingImpl.LunaRequestBaseModel
@property (nonatomic) NSString orderID;
@property (nonatomic) q settleMethod;
@property (nonatomic) BOOL isExternalSuccesss;
@property (nonatomic) NSString externalErrorInfo;
- (id)orderID;
- (void)setOrderID:;
- (long long)settleMethod;
- (BOOL)isExternalSuccesss;
- (void)setIsExternalSuccesss:;
- (id)externalErrorInfo;
- (void)setExternalErrorInfo:;
- (Class)responseModelClass;
- (id)init;
- (id)path;
- (void).cxx_destruct;
- (id)params;
@end
