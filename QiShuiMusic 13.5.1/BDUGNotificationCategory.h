@interface BDUGNotificationCategory : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSArray actions;
@property (nonatomic) NSArray intentIdentifiers;
@property (nonatomic) NSString hiddenPreviewsBodyPlaceholder;
@property (nonatomic) NSString categorySummaryFormat;
@property (nonatomic) Q options;
- (void)setOptions:;
- (void)setHiddenPreviewsBodyPlaceholder:;
- (void)setActions:;
- (id)identifier;
- (id)categorySummaryFormat;
- (id)intentIdentifiers;
- (id)hiddenPreviewsBodyPlaceholder;
- (unsigned long long)options;
- (id)actions;
- (void)setIntentIdentifiers:;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (void)setCategorySummaryFormat:;
+ (id)categoryWithIdentifier:actions:intentIdentifiers:options:;
+ (id)categoryWithIdentifier:actions:intentIdentifiers:hiddenPreviewsBodyPlaceholder:categorySummaryFormat:options:;
@end
