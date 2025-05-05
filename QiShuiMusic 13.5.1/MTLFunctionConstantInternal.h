@interface MTLFunctionConstantInternal : MTLFunctionConstant
- (void)dealloc;
- (id)formattedDescription:;
- (unsigned long long)index;
- (id)initWithName:type:index:required:;
- (unsigned long long)type;
- (id)description;
- (BOOL)required;
- (id)name;
@end
