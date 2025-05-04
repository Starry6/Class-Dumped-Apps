@interface AWEFeedCellManager : NSObject
@property (nonatomic) q type;
- (BOOL)cellReuseIdentifierContainsCommerceSpecificWithModel:;
- (id)identifierAndCellClassName;
- (id)identifierWithModel:;
- (BOOL)shouldAddCellIdentifierForPicoVR;
- (BOOL)enableLLMRecommendSurveyCellWithModel:;
- (void)registerToTableView:;
- (BOOL)shouldGreetCardUseSpecialCardIdentifierWithModel:;
- (BOOL)enablePlayletForCellReuseIdentifier;
- (BOOL)enableBackupForCellReuseIdentifier;
- (long long)type;
- (void)setType:;
- (id)initWithType:;
@end
