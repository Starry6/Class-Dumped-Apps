@interface CNAutocompleteSupplementalGroup : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray groupMembers;
- (id)identifier;
- (id)groupMembers;
- (id)title;
- (void).cxx_destruct;
- (id)initWithIdentifier:title:members:;
@end
