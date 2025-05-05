@interface USBudget : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSSet categoryIdentifiers;
@property (nonatomic) NSSet bundleIdentifiers;
@property (nonatomic) NSSet webDomains;
@property (nonatomic) NSString calendarIdentifier;
@property (nonatomic) NSDictionary schedule;
@property (nonatomic) q type;
@property (nonatomic) NSSet items;
- (id)calendarIdentifier;
- (id)webDomains;
- (id)items;
- (id)identifier;
- (id)initWithCoder:;
- (id)schedule;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)categoryIdentifiers;
- (id)bundleIdentifiers;
- (id)initWithCategories:applications:webDomains:schedule:calendarIdentifier:identifier:;
- (id)initWithType:items:schedule:calendarIdentifier:identifier:;
+ (BOOL)supportsSecureCoding;
@end
