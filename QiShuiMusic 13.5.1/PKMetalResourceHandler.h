@interface PKMetalResourceHandler : NSObject
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
+ (id)generatePipelineDescriptorsForDevice:;
@end
