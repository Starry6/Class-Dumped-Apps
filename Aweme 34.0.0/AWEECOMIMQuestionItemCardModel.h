@interface AWEECOMIMQuestionItemCardModel : NSObject
@property (nonatomic) NSString messageIdentifier;
@property (nonatomic) AWEECOMIMTextComponentModel themeTitleComponetModel;
@property (nonatomic) {CGSize=dd} themeTitleSize;
@property (nonatomic) NSArray questionList;
- (void)setQuestionList:;
- (id)questionList;
- (id)themeTitleSize;
- (void)setThemeTitleComponetModel:;
- (id)themeTitleComponetModel;
- (void)setThemeTitleSize:;
- (id)messageIdentifier;
- (void).cxx_destruct;
- (void)setMessageIdentifier:;
+ (id)questionCardModelWithQuesitonList:questionTitle:cellModel:;
+ (id)questionThemeTitleInset;
@end
