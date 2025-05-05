@interface VSKeychainItemKind : NSObject
@property (nonatomic) NSString itemClassName;
@property (nonatomic) r^{__CFString=} secItemClass;
@property (nonatomic) NSDictionary attributesByName;
@property (nonatomic) NSDictionary attributesBySecItemAttributeKey;
@property (nonatomic) NSArray properties;
- (id)init;
- (void)dealloc;
- (void)setProperties:;
- (id)properties;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)attributesByName;
- (void)setItemClassName:;
- (void)setSecItemClass:;
- (id)attributesBySecItemAttributeKey;
- (id)itemClassName;
- (id)secItemClass;
@end
