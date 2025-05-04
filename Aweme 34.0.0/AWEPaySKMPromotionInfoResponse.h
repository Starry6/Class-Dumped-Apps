@interface AWEPaySKMPromotionInfoResponse : CJPayBaseResponse
@property (nonatomic) NSArray<AWEPaySKMPromotionInfo> promotions;
@property (nonatomic) NSString errMsg;
@property (nonatomic) NSString errCode;
- (id)errCode;
- (id)errMsg;
- (void)setErrMsg:;
- (void)setErrCode:;
- (void)setPromotions:;
- (void).cxx_destruct;
- (BOOL)isSuccess;
- (id)promotions;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
