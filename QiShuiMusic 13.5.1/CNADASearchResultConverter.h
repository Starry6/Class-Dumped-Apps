@interface CNADASearchResultConverter : NSObject
@property (nonatomic) NSString displayName;
@property (nonatomic) CNAutocompleteNameComponents nameComponents;
- (id)nameComponents;
- (void)addPhoneNumber:;
- (void)addEmailAddress:;
- (id)build;
- (void)setDisplayName:;
- (id)displayName;
- (void)setNameComponents:;
- (void).cxx_destruct;
- (id)initWithFactory:;
+ (id)autocompleteResultsForDASearchResultElement:request:factory:;
+ (id)resultTransformForRequest:factory:;
+ (id)displayNameForElement:;
+ (id)nameComponentsForElement:;
+ (BOOL)shouldIncludeEmailAddressesForRequest:;
+ (BOOL)shouldIncludePhoneNumbersForRequest:;
@end
