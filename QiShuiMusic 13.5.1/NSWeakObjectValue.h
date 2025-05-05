@interface NSWeakObjectValue : NSValue
- (BOOL)isEqualToValue:;
- (void)dealloc;
- (void)getValue:size:;
- (void)getValue:;
- (id)objCType;
- (unsigned long long)hash;
- (id)nonretainedObjectValue;
- (id)initWithObject:;
- (id)weakObjectValue;
- (id)copyWithZone:;
@end
