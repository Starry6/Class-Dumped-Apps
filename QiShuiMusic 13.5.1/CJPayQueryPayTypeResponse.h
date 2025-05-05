@interface CJPayQueryPayTypeResponse : CJPayBaseResponse
@property (nonatomic) CJPayIntegratedChannelModel tradeInfo;
- (void)setTradeInfo:;
- (id)tradeInfo;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
