@interface CJPayFreqSuggestStyleInfo : JSONModel
@property (nonatomic) BOOL hasSuggestCard;
@property (nonatomic) NSString titleButtonLabel;
@property (nonatomic) NSString tradeConfirmButtonLabel;
@property (nonatomic) NSArray freqSuggestStyleIndexList;
- (id)freqSuggestStyleIndexList;
- (BOOL)hasSuggestCard;
- (void)setFreqSuggestStyleIndexList:;
- (void)setHasSuggestCard:;
- (void)setTitleButtonLabel:;
- (void)setTradeConfirmButtonLabel:;
- (id)titleButtonLabel;
- (id)tradeConfirmButtonLabel;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
