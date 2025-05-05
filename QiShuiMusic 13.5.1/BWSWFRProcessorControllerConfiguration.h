@interface BWSWFRProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration
@property (nonatomic) NSInteger version;
@property (nonatomic) NSInteger lossyCompressionLevel;
- (void)dealloc;
- (void)setVersion:;
- (int)version;
- (int)lossyCompressionLevel;
- (void)setLossyCompressionLevel:;
@end
