@interface TXRImageInfo : NSObject
@property (nonatomic) Q offset;
@property (nonatomic) <TXRBuffer> buffer;
@property (nonatomic) Q bytesPerRow;
@property (nonatomic) Q bytesPerImage;
@property (nonatomic) NSError error;
- (void)setBuffer:;
- (void)setOffset:;
- (id)buffer;
- (void)setError:;
- (id)error;
- (unsigned long long)offset;
- (void).cxx_destruct;
- (unsigned long long)bytesPerRow;
- (void)setBytesPerRow:;
- (unsigned long long)bytesPerImage;
- (void)setBytesPerImage:;
@end
