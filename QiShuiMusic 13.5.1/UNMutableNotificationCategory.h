@interface UNMutableNotificationCategory : UNNotificationCategory
@property (nonatomic) Q options;
@property (nonatomic) NSArray actions;
@property (nonatomic) NSArray minimalActions;
@property (nonatomic) NSArray intentIdentifiers;
@property (nonatomic) NSString hiddenPreviewsBodyPlaceholder;
@property (nonatomic) NSString categorySummaryFormat;
@property (nonatomic) NSString actionsMenuTitle;
@property (nonatomic) UNNotificationAction alternateAction;
@property (nonatomic) Q backgroundStyle;
@property (nonatomic) Q listPriority;
- (void)setOptions:;
- (void)setHiddenPreviewsBodyPlaceholder:;
- (void)setActions:;
- (void)setBackgroundStyle:;
- (void)setIntentIdentifiers:;
- (void)setListPriority:;
- (id)mutableCopyWithZone:;
- (id)initWithIdentifier:;
- (void)setMinimalActions:;
- (void)setAlternateAction:;
- (void)setCategorySummaryFormat:;
- (void)setActionsMenuTitle:;
@end
