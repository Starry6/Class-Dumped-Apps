@interface MPModelLibrarySearchScope : NSObject
@property (nonatomic) {shared_ptr<mlcore::LocalizedSearchScope>=^{LocalizedSearchScope}^{__shared_weak_count}} coreScope;
@property (nonatomic) MPModelKind itemKind;
@property (nonatomic) NSString name;
@property (nonatomic) MPPropertySet itemProperties;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)itemKind;
- (id)itemProperties;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithItemKind:name:properties:;
- (id)coreScope;
- (void)setItemKind:;
+ (BOOL)supportsSecureCoding;
@end
