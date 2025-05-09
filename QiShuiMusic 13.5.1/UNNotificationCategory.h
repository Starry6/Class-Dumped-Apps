@interface UNNotificationCategory : NSObject
@property (nonatomic) NSArray minimalActions;
@property (nonatomic) NSString actionsMenuTitle;
@property (nonatomic) UNNotificationAction alternateAction;
@property (nonatomic) Q backgroundStyle;
@property (nonatomic) Q listPriority;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSArray actions;
@property (nonatomic) NSArray intentIdentifiers;
@property (nonatomic) Q options;
@property (nonatomic) NSString hiddenPreviewsBodyPlaceholder;
@property (nonatomic) NSString categorySummaryFormat;
- (id)minimalActions;
- (id)identifier;
- (unsigned long long)backgroundStyle;
- (id)categorySummaryFormat;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (unsigned long long)listPriority;
- (id)intentIdentifiers;
- (void)encodeWithCoder:;
- (id)hiddenPreviewsBodyPlaceholder;
- (unsigned long long)options;
- (id)actions;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_initWithIdentifier:actions:minimalActions:alternateAction:intentIdentifiers:hiddenPreviewsBodyPlaceholder:categorySummaryFormat:actionsMenuTitle:options:backgroundStyle:listPriority:;
- (id)alternateAction;
- (id)actionsMenuTitle;
+ (BOOL)supportsSecureCoding;
+ (id)categoryWithIdentifier:actions:minimalActions:intentIdentifiers:hiddenPreviewsBodyPlaceholder:options:;
+ (id)categoryWithIdentifier:actions:intentIdentifiers:options:;
+ (id)categoryWithIdentifier:actions:intentIdentifiers:hiddenPreviewsBodyPlaceholder:options:;
+ (id)categoryWithIdentifier:actions:minimalActions:intentIdentifiers:options:;
+ (id)categoryWithIdentifier:actions:intentIdentifiers:hiddenPreviewsBodyPlaceholder:categorySummaryFormat:options:;
+ (id)categoryWithIdentifier:actions:minimalActions:intentIdentifiers:hiddenPreviewsBodyPlaceholder:categorySummaryFormat:options:;
@end
