@interface FigMetalTextureDescriptor : NSObject
@property (nonatomic) BOOL isLinear;
@property (nonatomic) NSString label;
@property (nonatomic) MTLTextureDescriptor desc;
- (id)init;
- (id)desc;
- (void)setDesc:;
- (void)setLabel:;
- (id)label;
- (BOOL)isLinear;
- (void).cxx_destruct;
- (void)initFromDescriptor:;
- (void)setIsLinear:;
@end
