@interface MTLStageInputOutputDescriptor : NSObject
@property (nonatomic) MTLBufferLayoutDescriptorArray layouts;
@property (nonatomic) MTLAttributeDescriptorArray attributes;
@property (nonatomic) Q indexType;
@property (nonatomic) Q indexBufferIndex;
- (id)formattedDescription:;
- (void)reset;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
+ (id)stageInputOutputDescriptor;
@end
