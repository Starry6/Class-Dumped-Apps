@interface MTLFunctionConstantValuesInternal : MTLFunctionConstantValues
- (id)init;
- (void)dealloc;
- (id)serializedConstantDataForFunction:dataSize:errorMessage:;
- (id)constantValueWithFunctionConstant:;
- (void)setConstantValue:type:withName:;
- (unsigned long long)hash;
- (void)setConstantValues:type:withRange:;
- (void)reset;
- (void)setConstantValue:type:atIndex:;
- (id)description;
- (id)newNamedConstantArray;
- (BOOL)isEqual:;
- (id)newIndexedConstantArray;
- (id)copyWithZone:;
@end
