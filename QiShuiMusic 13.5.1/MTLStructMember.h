@interface MTLStructMember : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) Q offset;
@property (nonatomic) Q dataType;
@property (nonatomic) Q argumentIndex;
- (id)structType;
- (id)pointerType;
- (id)textureReferenceType;
- (unsigned long long)renderTargetIndex;
- (id)arrayType;
- (id)indirectArgumentType;
+ (id)allocWithZone:;
+ (id)alloc;
@end
