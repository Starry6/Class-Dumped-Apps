@interface MTLIntersectionFunctionTableDescriptor : NSObject
@property (nonatomic) BOOL forceResourceIndex;
@property (nonatomic) Q resourceIndex;
@property (nonatomic) Q functionCount;
- (void)reset;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
+ (id)intersectionFunctionTableDescriptor;
@end
