@interface MTLBuiltInArgument : MTLBindingInternal
- (id)formattedDescription:;
- (id)initWithName:type:access:active:index:dataType:builtInType:;
- (unsigned long long)builtInDataType;
- (unsigned long long)builtInType;
@end
