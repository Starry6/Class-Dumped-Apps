@interface MTLFunctionReflection : NSObject
@property (nonatomic) NSArray arguments;
@property (nonatomic) Q primitiveKind;
@property (nonatomic) NSArray tags;
+ (id)allocWithZone:;
+ (id)alloc;
@end
