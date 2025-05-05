@interface BmfSdr2Hdr : NSObject
@property (nonatomic) ^{Sdr2Hdr=B^{MetalRuntime}@@@@@@@@@@{?=QQQ}} instance_;
@property (nonatomic) ^{MetalRuntime=^{MetalRuntimeImpl}} metal_runtime_;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init::::::;
- (id)instance_;
- (id)metal_runtime_;
- (BOOL)needSdr2HdrAndHdrBn:;
- (int)process::;
- (int)processRGBA::;
- (int)processYUV:::;
- (int)processYuvToYuv:;
- (void)setInstance_:;
- (int)setMatrix::;
- (void)setMetal_runtime_:;
- (int)setYUV2RGBMatrix:AndOffset:SetRGB2YUVMatrix:AndOffset:;
- (void)dealloc;
@end
