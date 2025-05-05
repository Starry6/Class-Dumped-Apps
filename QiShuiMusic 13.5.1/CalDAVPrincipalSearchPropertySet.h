@interface CalDAVPrincipalSearchPropertySet : NSObject
@property (nonatomic) NSSet stringProperties;
@property (nonatomic) BOOL supportsPropertySearch;
- (BOOL)supportsWellKnownType:;
- (void)setStringProperties:;
- (BOOL)supportsPropertyTypeWithNameSpace:andName:;
- (id)initWithStringProperties:;
- (BOOL)isEqualToPropertySet:;
- (id)initWithSearchProperties:;
- (void).cxx_destruct;
- (id)stringProperties;
- (BOOL)supportsPropertySearch;
+ (id)searchSetWithProperties:;
@end
