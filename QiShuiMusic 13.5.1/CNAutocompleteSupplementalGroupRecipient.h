@interface CNAutocompleteSupplementalGroupRecipient : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray members;
- (id)members;
- (id)identifier;
- (id)title;
- (void).cxx_destruct;
- (id)initWithIdentifier:title:members:;
@end
