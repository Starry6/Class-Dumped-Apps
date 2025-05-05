@interface JEBrotliEncoder : NSObject
@property (nonatomic) ^{BrotliEncoderStateStruct=} encoder;
@property (nonatomic) I quality;
@property (nonatomic) I sizeHint;
@property (nonatomic) BOOL isFinished;
- (unsigned int)quality;
- (id)init;
- (void)dealloc;
- (void)setQuality:;
- (id)encoder;
- (BOOL)isFinished;
- (void)setSizeHint:;
- (BOOL)compressStreamWithOperation:availableIn:nextIn:availableOut:nextOut:;
- (unsigned int)sizeHint;
@end
