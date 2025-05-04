@interface AWEECOMIMSelectQuesitonMsgCell : AWEECOMIMBaseUserMsgCell
@property (nonatomic) AWEECOMIMQuestionListView questionsView;
@property (nonatomic) AWEECOMIMSelectQuestionMsgModel cellModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCellModel:;
- (void)didCustomInit;
- (id)questionsView;
- (void)questionListViewDidSendQuesitonAnswer:;
- (void)setQuestionsView:;
- (void).cxx_destruct;
- (void)layoutSubviews;
+ (void)getSize:withModel:;
@end
