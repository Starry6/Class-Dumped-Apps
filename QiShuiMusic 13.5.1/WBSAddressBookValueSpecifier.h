@interface WBSAddressBookValueSpecifier : NSObject
@property (nonatomic) NSString property;
@property (nonatomic) NSString component;
@property (nonatomic) NSString label;
@property (nonatomic) NSString category;
@property (nonatomic) NSString parentProperty;
- (id)property;
- (id)component;
- (unsigned long long)hash;
- (id)label;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)category;
- (id)parentProperty;
- (id)initWithProperty:component:label:category:parentProperty:;
- (id)initWithProperty:component:label:;
@end
