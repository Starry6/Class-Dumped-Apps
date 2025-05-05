@interface MTLLinkedFunctionsInternal : MTLLinkedFunctions
- (id)binaryFunctions;
- (BOOL)isEmpty;
- (void)dealloc;
- (id)formattedDescription:;
- (id)groups;
- (void)setGroups:;
- (void)setBinaryFunctions:;
- (id)functions;
- (unsigned long long)hash;
- (id)privateFunctions;
- (void)setPrivateFunctions:;
- (id)description;
- (void)setFunctions:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
@end
