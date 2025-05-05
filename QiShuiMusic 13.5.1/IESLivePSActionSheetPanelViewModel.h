@interface IESLivePSActionSheetPanelViewModel : NSObject
@property (nonatomic) NSArray topSpecialAreaItems;
@property (nonatomic) NSArray tableViewModels;
@property (nonatomic) HTSLiveMessageListNode messageNode;
- (void)setMessageNode:;
- (id)tableViewModels;
- (id)messageNode;
- (void)setTableViewModels:;
- (void)setTopSpecialAreaItems:;
- (id)topSpecialAreaItems;
- (void).cxx_destruct;
@end
