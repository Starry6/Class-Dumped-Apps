@interface AWEBatManActionsViewModel : NSObject
@property (nonatomic) NSArray actionsArray;
@property (nonatomic) BOOL isShowMoreGame;
@property (nonatomic) <AWEBatManManagerProtocol> delegate;
- (void)setIsShowMoreGame:;
- (BOOL)isShowMoreGame;
- (id)actionsArray;
- (void)setActionsArray:;
- (id)userGuideArray;
- (id)constructActionsArray;
- (id)actionsTypeArray;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
