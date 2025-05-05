@interface DefaultPostProcessor : NSObject
@property (nonatomic) BOOL removePadding;
@property (nonatomic) I processedPixelFormat;
@property (nonatomic) @ exactBytesPerRow;
@property (nonatomic) I originalPixelFormat;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void).cxx_destruct;
- (unsigned int)originalPixelFormat;
- (id)initWithOriginalPixelFormat:;
- (id)processedPixelBufferFrom:metadata:error:;
- (BOOL)removePadding;
- (void)setRemovePadding:;
- (unsigned int)processedPixelFormat;
- (id)exactBytesPerRow;
- (void)setExactBytesPerRow:;
- (void)setOriginalPixelFormat:;
- (unsigned long long)minimumBytesPerRowForPixelBuffer:;
- (BOOL)shouldChangeBytesPerRowOfPixelBuffer:;
- (BOOL)shouldRemovePaddingOfPixelBuffer:metadata:;
- (id)pixelBufferWithoutPaddingFromPixelBuffer:error:;
- (id)pixelBufferWithExactBytesPerRow:fromPixelBuffer:error:;
@end
