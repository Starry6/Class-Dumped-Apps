@interface TXRImage : NSObject
@property (nonatomic) Q offset;
@property (nonatomic) <TXRBuffer> buffer;
@property (nonatomic) Q bytesPerRow;
@property (nonatomic) Q bytesPerImage;
@property (nonatomic) NSError error;
- (id)buffer;
- (id)error;
- (unsigned long long)offset;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (unsigned long long)bytesPerRow;
- (unsigned long long)bytesPerImage;
- (void)deferredProvide;
- (id)initWithBytesPerRow:bytesPerImage:buffer:offset:;
- (id)initAsLevel:element:face:dataSourceProvider:;
@end
