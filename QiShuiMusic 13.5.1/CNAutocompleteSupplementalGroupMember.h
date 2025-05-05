@interface CNAutocompleteSupplementalGroupMember : NSObject
@property (nonatomic) NSString address;
@property (nonatomic) q addressType;
@property (nonatomic) NSPersonNameComponents nameComponents;
@property (nonatomic) NSString name;
- (id)nameComponents;
- (void).cxx_destruct;
- (id)address;
- (id)name;
- (long long)addressType;
- (id)initWithNameComponents:address:addressType:;
- (id)initWithName:address:addressType:;
@end
