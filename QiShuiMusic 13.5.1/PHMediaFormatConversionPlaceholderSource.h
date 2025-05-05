@interface PHMediaFormatConversionPlaceholderSource : PHMediaFormatConversionSource
@property (nonatomic) NSString fileType;
- (void)setFileType:;
- (id)imageDimensions;
- (id)fileType;
- (void).cxx_destruct;
- (id)fileURL;
- (unsigned long long)length;
- (id)initWithFileType:mediaType:;
+ (id)imageSourceForFileType:;
+ (id)videoSourceForFileType:;
@end
