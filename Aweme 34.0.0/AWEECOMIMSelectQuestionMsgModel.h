@interface AWEECOMIMSelectQuestionMsgModel : AWEECOMIMBaseMsgModel
@property (nonatomic) NSString questionTitle;
@property (nonatomic) NSArray questionList;
@property (nonatomic) AWEECOMIMQuestionItemCardModel questionModel;
@property (nonatomic) double questionTotalHeight;
- (void)reBulildCellFullContentHeight;
- (void)setQuestionList:;
- (void)setQuestionTitle:;
- (id)questionList;
- (id)questionTitle;
- (void)setQuestionModel:;
- (id)questionModel;
- (void)setQuestionTotalHeight:;
- (double)questionTotalHeight;
- (void).cxx_destruct;
- (id)initWithMessage:;
+ (Class)cellClass;
@end
