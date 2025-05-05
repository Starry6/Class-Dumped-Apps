@interface BUContentInfo : NSObject
@property (nonatomic) NSString contentType;
@property (nonatomic) BOOL byteRangeAccessSupported;
@property (nonatomic) Q contentLength;
@property (nonatomic) BOOL isValid;
- (void)setContentType:;
- (void)setContentLength:;
- (id)contentType;
- (id)initWithCoder:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void)setByteRangeAccessSupported:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (unsigned long long)contentLength;
- (BOOL)byteRangeAccessSupported;
@end
