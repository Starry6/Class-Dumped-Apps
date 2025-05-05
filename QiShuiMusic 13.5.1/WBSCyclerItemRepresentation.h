@interface WBSCyclerItemRepresentation : NSObject
@property (nonatomic) NSString uniqueIdentifier;
@property (nonatomic) NSString title;
@property (nonatomic) NSDictionary extraAttributes;
- (void)setUniqueIdentifier:;
- (id)init;
- (void)setExtraAttributes:;
- (id)uniqueIdentifier;
- (id)extraAttributes;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (BOOL)isEquivalent:;
- (id)copyWithZone:;
- (id)initWithTitle:uniqueIdentifier:;
- (id)pairsOfItemsWithDifferingExtraAttributesComparedTo:;
+ (BOOL)supportsSecureCoding;
@end
