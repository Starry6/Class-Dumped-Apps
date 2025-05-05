@interface INObjectCollection : NSObject
@property (nonatomic) NSArray sections;
@property (nonatomic) NSArray allItems;
@property (nonatomic) BOOL usesIndexedCollation;
- (id)initWithItems:;
- (id)sections;
- (id)allItems;
- (id)initWithSections:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)_typedObjectCollectionWithCodableAttribute:;
- (id)_untypedObjectCollectionWithItemClass:codableAttribute:error:;
- (BOOL)usesIndexedCollation;
- (void)setUsesIndexedCollation:;
+ (BOOL)supportsSecureCoding;
@end
