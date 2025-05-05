@interface ARSharedGPUDevice : NSObject
@property (nonatomic) <MTLDevice> device;
- (void)setDevice:;
- (void).cxx_destruct;
- (id)device;
+ (id)sharedInstance;
@end
