@interface MTLBufferLayoutDescriptor : NSObject
@property (nonatomic) Q stride;
@property (nonatomic) Q stepFunction;
@property (nonatomic) Q stepRate;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
@end
