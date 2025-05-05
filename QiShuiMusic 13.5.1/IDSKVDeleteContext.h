@interface IDSKVDeleteContext : NSObject
@property (nonatomic) Q rowIDCutoff;
@property (nonatomic) c valueType;
- (void)setValueType:;
- (char)valueType;
- (unsigned long long)rowIDCutoff;
- (void)setRowIDCutoff:;
@end
