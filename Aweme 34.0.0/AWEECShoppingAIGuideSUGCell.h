@interface AWEECShoppingAIGuideSUGCell : AWEECShoppingAIGuideBaseCell
@property (nonatomic) NSArray sugList;
@property (nonatomic) AWEECShoppingAIGuideMessageGroupViewModel messageViewModel;
- (id)messageViewModel;
- (id)sugList;
- (void)setupUIWithMessageModel:;
- (void)setSugList:;
- (void)setMessageViewModel:;
- (double)sugCellHeight;
- (id)initWithSUGList:;
- (void).cxx_destruct;
+ (double)cellHeightForViewModel:;
+ (double)itemHeightWithRole:;
@end
