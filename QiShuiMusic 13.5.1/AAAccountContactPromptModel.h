@interface AAAccountContactPromptModel : NSObject
@property (nonatomic) AALocalContactInfo contact;
@property (nonatomic) NSString title;
@property (nonatomic) NSString detailsLabel;
@property (nonatomic) NSString detailsSubtitle;
@property (nonatomic) NSString primaryActionText;
@property (nonatomic) NSString secondaryActionText;
@property (nonatomic) NSString destructiveActionText;
@property (nonatomic) NSString destructiveActionSheetTitle;
@property (nonatomic) NSString destructiveActionSheetDetails;
@property (nonatomic) NSString destructiveActionSheetCancelText;
@property (nonatomic) NSString doneButtonTitle;
@property (nonatomic) BOOL primaryActionRequiresAuth;
@property (nonatomic) BOOL destructiveActionRequiresAuth;
- (id)init;
- (id)contact;
- (void)setContact:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)detailsLabel;
- (void)setDetailsLabel:;
- (id)detailsSubtitle;
- (void)setDetailsSubtitle:;
- (id)primaryActionText;
- (void)setPrimaryActionText:;
- (id)secondaryActionText;
- (void)setSecondaryActionText:;
- (id)destructiveActionText;
- (void)setDestructiveActionText:;
- (id)destructiveActionSheetTitle;
- (void)setDestructiveActionSheetTitle:;
- (id)destructiveActionSheetDetails;
- (void)setDestructiveActionSheetDetails:;
- (id)destructiveActionSheetCancelText;
- (void)setDestructiveActionSheetCancelText:;
- (id)doneButtonTitle;
- (void)setDoneButtonTitle:;
- (BOOL)primaryActionRequiresAuth;
- (void)setPrimaryActionRequiresAuth:;
- (BOOL)destructiveActionRequiresAuth;
- (void)setDestructiveActionRequiresAuth:;
@end
