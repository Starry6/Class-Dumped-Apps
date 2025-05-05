@interface CJPayOrderResponse : CJPayIntergratedBaseResponse
@property (nonatomic) NSString channelData;
@property (nonatomic) NSString tradeType;
@property (nonatomic) NSString ptCode;
- (id)payDataDict;
- (id)ptCode;
- (void)setPtCode:;
- (void)setTradeType:;
- (id)tradeType;
- (void).cxx_destruct;
- (id)channelData;
- (void)setChannelData:;
+ (id)keyMapper;
@end
