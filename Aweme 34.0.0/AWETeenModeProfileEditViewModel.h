@interface AWETeenModeProfileEditViewModel : NSObject
@property (nonatomic) NSArray cellTypeArray;
@property (nonatomic) AWEUserModel user;
@property (nonatomic) NSArray itemsArray;
@property (nonatomic) <AWETeenModeProfileEditViewControllerDelegate> controllerDelegate;
@property (nonatomic) float completionPercent;
- (id)cellTypeArray;
- (void)setCellTypeArray:;
- (void)refreshWithUser:;
- (float)completionPercent;
- (id)constructItemsArray;
- (id)_buildItemWithType:;
- (void)setCompletionPercent:;
- (id)user;
- (void)setUser:;
- (id)controllerDelegate;
- (void).cxx_destruct;
- (void)setControllerDelegate:;
- (id)itemsArray;
- (void)setItemsArray:;
@end
