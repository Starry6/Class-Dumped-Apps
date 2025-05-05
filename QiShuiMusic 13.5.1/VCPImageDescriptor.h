@interface VCPImageDescriptor : NSObject
- (id)initWithImage:;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)serialize;
- (int)computeDistance:toDescriptor:;
+ (int)preferredPixelFormat;
+ (BOOL)usePHAssetData;
+ (id)descriptorWithImage:;
+ (id)descriptorWithData:;
@end
