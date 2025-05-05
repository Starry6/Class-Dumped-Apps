@interface SAUISnippet : SAAceView
@property (nonatomic) q category;
@property (nonatomic) SAUIConfirmationOptions confirmationOptions;
@property (nonatomic) SAUISash sash;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString summaryTitle;
@property (nonatomic) NSString title;
- (id)groupIdentifier;
- (id)summaryTitle;
- (void)setSubtitle:;
- (void)setTitle:;
- (void)setSummaryTitle:;
- (id)title;
- (void)setCategory:;
- (id)encodedClassName;
- (id)subtitle;
- (long long)category;
- (id)confirmationOptions;
- (void)setConfirmationOptions:;
- (id)sash;
- (void)setSash:;
+ (id)snippet;
+ (id)snippetWithDictionary:context:;
@end
