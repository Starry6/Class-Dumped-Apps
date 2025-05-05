@interface SIE5RTTensorPortDescriptor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)getShape;
- (unsigned long long)getWidth;
- (unsigned long long)getHeight;
- (void)bindInputPixelBuffer:;
- (void)bindInputRawPointer:;
- (unsigned long long)getChannels;
- (unsigned long long)getNumberOfElements;
- (unsigned long long)getRowElements;
- (unsigned long long)getBatchnum;
- (id)getDataPtr;
- (id)initWithE5RTPort:portType:;
- (unsigned long long)getRank;
- (int)getComponentType;
- (unsigned char)getNumComponents;
- (unsigned long long)getComponentSize;
- (id)getStrides;
- (BOOL)isPacked;
- (BOOL)isPackedFP32;
- (BOOL)isFP16_ANE;
- (BOOL)isS8_ANE;
- (BOOL)isU8_ANE;
- (id)createPackedFP32TensorDescriptor;
@end
