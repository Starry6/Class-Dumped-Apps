@interface SIE5RTSurfacePortDescriptor : NSObject
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
@end
