@interface MTLVertexAttributeInternal : MTLVertexAttribute
- (void)dealloc;
- (id)formattedDescription:;
- (void)setAttributeType:;
- (BOOL)isPatchData;
- (id)initWithName:attributeIndex:attributeType:flags:;
- (unsigned long long)attributeType;
- (id)description;
- (id)name;
- (BOOL)isActive;
- (BOOL)isPatchControlPointData;
- (unsigned long long)attributeIndex;
@end
