@interface MTLRenderPipelineReflection : NSObject
@property (nonatomic) NSArray vertexBindings;
@property (nonatomic) NSArray fragmentBindings;
@property (nonatomic) NSArray tileBindings;
@property (nonatomic) NSArray objectBindings;
@property (nonatomic) NSArray meshBindings;
@property (nonatomic) NSArray vertexArguments;
@property (nonatomic) NSArray fragmentArguments;
@property (nonatomic) NSArray tileArguments;
+ (id)allocWithZone:;
+ (id)alloc;
@end
