@interface MTLCommandBufferDescriptor : NSObject
@property (nonatomic) BOOL retainedReferences;
@property (nonatomic) Q errorOptions;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
@end
