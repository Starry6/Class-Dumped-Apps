@interface SecCBORMap : SecCBORValue
- (void)write:;
- (id)init;
- (void).cxx_destruct;
- (int)fieldType;
- (id)dictionaryRepresentation;
- (void)setKey:value:;
- (id)getSortedKeys;
@end
