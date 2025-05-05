@interface SecCBORUnsigned : SecCBORValue
- (void)write:;
- (long long)compare:;
- (int)fieldType;
- (id)initWith:;
- (id)getLabel;
@end
