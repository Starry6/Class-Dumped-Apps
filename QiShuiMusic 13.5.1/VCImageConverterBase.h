@interface VCImageConverterBase : NSObject
- (void)dealloc;
- (id)initWithFormatType:;
- (BOOL)setUpBufferPoolForOutputWidth:outputHeight:;
- (BOOL)ensureBufferPoolSupportsOutputWidth:outputHeight:;
@end
