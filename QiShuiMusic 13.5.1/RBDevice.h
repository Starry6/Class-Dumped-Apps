@interface RBDevice : NSObject
@property (nonatomic) <MTLDevice> device;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) <MTLCaptureScope> captureScope;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)renderImageInRect:options:renderer:;
- (id)captureScope;
- (id)pipelineDescriptions:extraColorFormats:;
- (void)renderImageInRect:options:renderer:completionQueue:handler:;
- (void).cxx_destruct;
- (id)initWithDevice:;
- (void)collectResources;
- (id)queue;
- (id).cxx_construct;
- (id)device;
+ (BOOL)isSupported;
+ (void)didEnterBackground:;
+ (id)allDevices;
+ (id)sharedDefaultDevice;
+ (id)sharedDevice:;
+ (void)willEnterForeground:;
@end
