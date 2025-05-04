@interface AWEECOMIMFootDescSourceUIModel : NSObject
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) NSString sourceText;
@property (nonatomic) NSArray placeHolderList;
@property (nonatomic) AWEECOMIMFootDescMsgSourceLabelModel sourceLabelModel;
@property (nonatomic) BOOL cardHeaderEnableFootDesc;
@property (nonatomic) BOOL disableByAggregation;
@property (nonatomic) BOOL disableByFold;
- (id)sourceLabelModel;
- (id)placeHolderList;
- (void)setPlaceHolderList:;
- (BOOL)disableByAggregation;
- (BOOL)disableByFold;
- (BOOL)cardHeaderEnableFootDesc;
- (void)setSourceLabelModel:;
- (void)setCardHeaderEnableFootDesc:;
- (void)setDisableByAggregation:;
- (void)setDisableByFold:;
- (void).cxx_destruct;
- (BOOL)shouldShow;
- (id)sourceText;
- (void)setShouldShow:;
- (void)setSourceText:;
@end
