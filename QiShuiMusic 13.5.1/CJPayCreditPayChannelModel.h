@interface CJPayCreditPayChannelModel : CJPayChannelModel
@property (nonatomic) CJPaySubPayTypeData payTypeData;
@property (nonatomic) NSString extParamStr;
- (void)setPayTypeData:;
- (id)buildShowConfig;
- (void)setExtParamStr:;
- (id)buildParams;
- (id)extParamStr;
- (id)payTypeData;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
