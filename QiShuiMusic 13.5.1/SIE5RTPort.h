@interface SIE5RTPort : NSObject
@property (nonatomic) ^{e5rt_io_port=} port;
- (id)port;
- (void).cxx_destruct;
- (id)getShape;
- (unsigned long long)getWidth;
- (unsigned long long)getHeight;
- (id)initPortWithE5RTStreamOperation:blobName:portType:;
- (void)bindOutputSurface:;
- (void)bindInputPixelBuffer:;
- (void)bindInputRawPointer:;
- (unsigned long long)getChannels;
- (unsigned long long)getNumberOfElements;
- (unsigned long long)getRowElements;
- (unsigned long long)getBatchnum;
- (id)getDataPtr;
@end
