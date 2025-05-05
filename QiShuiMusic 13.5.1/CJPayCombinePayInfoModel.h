@interface CJPayCombinePayInfoModel : JSONModel
@property (nonatomic) NSArray<CJPayPrimaryCombinePayInfoModel> primaryPayInfoList;
@property (nonatomic) CJPaySecondaryCombinePayInfoModel secondaryPayInfo;
@property (nonatomic) CJPayVoucherInfoModel combinePayVoucherInfo;
@property (nonatomic) NSArray combinePayVoucherMsgList;
@property (nonatomic) NSString standardRecDesc;
@property (nonatomic) NSString standardShowAmount;
- (id)standardRecDesc;
- (id)combinePayVoucherInfo;
- (id)combinePayVoucherMsgList;
- (id)primaryPayInfoList;
- (id)secondaryPayInfo;
- (void)setCombinePayVoucherInfo:;
- (void)setCombinePayVoucherMsgList:;
- (void)setPrimaryPayInfoList:;
- (void)setSecondaryPayInfo:;
- (void)setStandardRecDesc:;
- (void)setStandardShowAmount:;
- (id)standardShowAmount;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
