@interface AWEECOMIMUserGuideCareCardModel : AWEECOMIMBaseCardModel
@property (nonatomic) NSArray originalCardDict;
@property (nonatomic) NSArray cardModelArr;
- (id)msgCommonTrackParams;
- (void)updateModelWithData:encrypted:;
- (void)reBulildCellFullContentHeight;
- (id)cardModelArr;
- (void)setOriginalCardDict:;
- (id)originalCardDict;
- (id)parseCardDataWithSinglecCardDict:;
- (void)setCardModelArr:;
- (id)textContentSizeWithTextModel:;
- (void).cxx_destruct;
+ (id)careNoticeMsgType;
+ (BOOL)isCareCard;
+ (Class)cardViewClass;
+ (double)itemSpacePadding;
@end
