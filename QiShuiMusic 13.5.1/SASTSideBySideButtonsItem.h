@interface SASTSideBySideButtonsItem : AceObject
@property (nonatomic) NSString buttonsViewStyle;
@property (nonatomic) <SASTTemplateAction> primaryButtonAction;
@property (nonatomic) BOOL primaryButtonEnabled;
@property (nonatomic) NSString primaryButtonLabel;
@property (nonatomic) SAUIColor primaryButtonTextColor;
@property (nonatomic) <SASTTemplateAction> secondaryButtonAction;
@property (nonatomic) BOOL secondaryButtonEnabled;
@property (nonatomic) NSString secondaryButtonLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setPrimaryButtonAction:;
- (void)setSecondaryButtonAction:;
- (id)primaryButtonAction;
- (id)secondaryButtonAction;
- (void)setPrimaryButtonEnabled:;
- (id)buttonsViewStyle;
- (void)setButtonsViewStyle:;
- (BOOL)primaryButtonEnabled;
- (id)primaryButtonLabel;
- (void)setPrimaryButtonLabel:;
- (id)primaryButtonTextColor;
- (void)setPrimaryButtonTextColor:;
- (BOOL)secondaryButtonEnabled;
- (void)setSecondaryButtonEnabled:;
- (id)secondaryButtonLabel;
- (void)setSecondaryButtonLabel:;
+ (id)sideBySideButtonsItem;
+ (id)sideBySideButtonsItemWithDictionary:context:;
@end
