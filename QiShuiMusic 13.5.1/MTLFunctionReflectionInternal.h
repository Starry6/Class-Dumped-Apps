@interface MTLFunctionReflectionInternal : MTLFunctionReflection
- (id)tags;
- (void)dealloc;
- (id)arguments;
- (id)initWithDevice:reflectionData:functionType:options:;
- (id)initWithArguments:argumentCount:builtInArgumentCount:pluginReturnData:primitiveKind:tags:tagCount:;
- (id)builtInArguments;
- (id)pluginReturnData;
- (unsigned long long)primitiveKind;
@end
