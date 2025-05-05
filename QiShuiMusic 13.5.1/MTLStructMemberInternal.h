@interface MTLStructMemberInternal : MTLStructMember
@property (nonatomic) Q pixelFormat;
@property (nonatomic) Q aluType;
@property (nonatomic) Q render_target;
@property (nonatomic) Q raster_order_group;
- (void)setOffset:;
- (void)dealloc;
- (id)formattedDescription:;
- (id)dataTypeDescription;
- (id)structType;
- (unsigned long long)dataType;
- (id)initWithName:offset:dataType:pixelFormat:aluType:indirectArgumentIndex:render_target:raster_order_group:details:;
- (id)pointerType;
- (unsigned long long)offset;
- (unsigned long long)raster_order_group;
- (BOOL)isMemberLayoutThreadSafeWith:;
- (id)textureReferenceType;
- (unsigned long long)argumentIndex;
- (unsigned long long)indirectArgumentIndex;
- (id)arrayType;
- (unsigned long long)pixelFormat;
- (id)indirectArgumentType;
- (id)name;
- (unsigned long long)render_target;
- (unsigned long long)aluType;
@end
