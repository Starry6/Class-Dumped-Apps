@interface MPSGraphTensorData : NSObject
@property (nonatomic) ^{__IOSurface=} iosurface;
@property (nonatomic) NSString label;
@property (nonatomic) NSArray shape;
@property (nonatomic) I dataType;
@property (nonatomic) MPSGraphDevice device;
- (void)dealloc;
- (id)shape;
- (void)setLabel:;
- (unsigned int)dataType;
- (id)label;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)iosurface;
- (id)device;
- (void)print;
- (void)commonInitialize;
- (id)initWithDevice:data:shape:dataType:;
- (id)initWithMTLBuffer:shape:dataType:;
- (id)initWithMTLBuffer:shape:dataType:rowBytes:;
- (id)initWithMPSMatrix:rank:;
- (id)initWithMPSMatrix:;
- (id)initWithMPSVector:;
- (id)initWithMPSVector:rank:;
- (id)initWithMPSNDArray:device:;
- (id)initWithMPSNDArray:;
- (id)initWithMPSImageBatch:;
- (id)initWithDevice:IOSurface:rowBytesAlignment:shape:dataType:;
- (id)initWithDevice:rowBytesAlignment:shape:dataType:;
- (id)initEmptyWithShape:dataType:device:;
- (id)mpsndarray;
- (void)printNDArray;
- (void)printIOSurface;
- (id)checkTensorData:nativeUlps:absoluteErr:PSNR:;
- (id)checkTensorData:nativeUlps:absoluteErr:;
- (id)checkWithReferenceTensorData:nativeUlps:absoluteError:PSNR:;
@end
