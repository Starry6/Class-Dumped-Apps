@interface AWEECOMIMRelevantQuestionCardModel : AWEECOMIMBaseCardModel
@property (nonatomic) NSString questionTitle;
@property (nonatomic) NSArray questionList;
@property (nonatomic) AWEECOMIMQuestionItemCardModel questionModel;
@property (nonatomic) double questionTotalHeight;
- (void)updateModelWithData:encrypted:;
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
+ (Class)cardViewClass;
@end
