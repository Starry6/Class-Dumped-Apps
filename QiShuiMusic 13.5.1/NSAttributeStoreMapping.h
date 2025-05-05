@interface NSAttributeStoreMapping : NSPropertyStoreMapping
- (id)sqlType;
- (id)attribute;
- (id)initWithProperty:;
- (int)externalType;
- (void)setExternalType:;
- (BOOL)isEqual:;
@end
