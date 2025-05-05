@interface MDLVertexDescriptor : NSObject
@property (nonatomic) NSMutableArray attributes;
@property (nonatomic) NSMutableArray layouts;
- (void)setLayouts:;
- (id)init;
- (id)layouts;
- (unsigned long long)hash;
- (void)setAttributes:;
- (id)attributes;
- (void).cxx_destruct;
- (void)reset;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)attributeNamed:;
- (void)addOrReplaceAttribute:;
- (void)debugPrintToFile:;
- (id)initWithVertexDescriptor:;
- (void)removeAttributeNamed:;
- (void)setPackedStrides;
- (void)setPackedOffsets;
- (void)_encodeVertexDescriptorLayoutsWithCoder:;
- (void)_encodeVertexDescriptorAttributesWithCoder:;
- (void)encodeVertexDescriptorWithCoder:;
+ (id)_decodeVertexDescriptorAttributesWithCoder:;
+ (id)_decodeVertexDescriptorLayoutsWithCoder:;
+ (id)decodeVertexDescriptorWithCoder:;
@end
