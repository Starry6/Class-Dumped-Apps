@interface PHImageDecoderAsyncDecodeRequestHandle : NSObject
@property (nonatomic) Q figRequestID;
@property (nonatomic) Q figGainMapRequestID;
@property (nonatomic) ^{CMPhotoDecompressionContainer=} c;
@property (nonatomic) ^{CMPhotoDecompressionContainer=} figDecompressionContainer;
@property (nonatomic) BOOL cancelRequested;
@property (nonatomic) PHImageDecoder initialDecoder;
- (void)cancel;
- (void)dealloc;
- (void)setC:;
- (void)setFigDecompressionContainer:;
- (id)initialDecoder;
- (void)setFigGainMapRequestID:;
- (id)figDecompressionContainer;
- (BOOL)cancelRequested;
- (unsigned long long)figGainMapRequestID;
- (void)setFigRequestID:;
- (unsigned long long)figRequestID;
- (void).cxx_destruct;
- (id)initWithFigRequestID:container:figDecoder:;
- (id)c;
- (id)initWithImageIODecoder:;
@end
