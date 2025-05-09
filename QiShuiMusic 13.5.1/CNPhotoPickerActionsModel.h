@interface CNPhotoPickerActionsModel : NSObject
@property (nonatomic) NSArray currentInlineActionButtons;
@property (nonatomic) CNPhotoPickerActionButton deleteButton;
@property (nonatomic) CNPhotoPickerProviderItem providerItem;
@property (nonatomic) NSIndexPath indexPath;
@property (nonatomic) BOOL canDelete;
@property (nonatomic) NSString assignActionTitleOverride;
@property (nonatomic) BOOL buttonsDisabled;
@property (nonatomic) <CNPhotoPickerActionsDelegate> delegate;
@property (nonatomic) NSArray inlineActionButtons;
- (void)setDelegate:;
- (void)setIndexPath:;
- (BOOL)canPerformActionType:;
- (id)delegate;
- (void).cxx_destruct;
- (id)deleteButton;
- (BOOL)canDelete;
- (id)indexPath;
- (void)setDeleteButton:;
- (id)initWithProviderItem:assignActionTitleOverride:canDelete:atIndexPath:;
- (id)inlineActionButtons;
- (id)generateInlineActionButtons;
- (void)setButtonsDisabled:;
- (void)updateProviderItem:;
- (void)didTapAssignToContact;
- (void)didTapEdit;
- (void)didTapDuplicate;
- (void)didTapDelete;
- (id)providerItem;
- (void)setProviderItem:;
- (id)currentInlineActionButtons;
- (void)setCurrentInlineActionButtons:;
- (void)setCanDelete:;
- (id)assignActionTitleOverride;
- (void)setAssignActionTitleOverride:;
- (BOOL)buttonsDisabled;
+ (id)localizedTitleForActionType:;
+ (unsigned long long)maximumNumberOfButtons;
+ (id)buttonForActionType:withActionBlock:;
+ (id)buttonForActionType:titleOverride:withActionBlock:;
+ (BOOL)actionIsDestructive:;
@end
