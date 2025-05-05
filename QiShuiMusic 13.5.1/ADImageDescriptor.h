@interface ADImageDescriptor : NSObject
@property (nonatomic) I pixelFormat;
- (id)sizeForLayout:;
- (void).cxx_destruct;
- (unsigned int)pixelFormat;
- (id).cxx_construct;
- (unsigned long long)layoutForSize:;
- (id)cloneWithDifferentFormat:;
- (id)initWithSupportedSizes:pixelFormat:;
- (BOOL)supportsLayout:;
+ (id)descriptorForSupportedSizes:pixelFormat:;
+ (id)descriptorWithDefaultSize:pixelFormat:;
@end
