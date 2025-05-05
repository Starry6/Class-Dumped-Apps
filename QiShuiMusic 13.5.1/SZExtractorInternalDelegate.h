@interface SZExtractorInternalDelegate : NSObject
@property (nonatomic) <SZExtractorDelegate> delegate;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setExtractionProgress:;
- (void)extractionCompleteAtArchivePath:;
- (void)extractionEnteredPassThroughMode;
@end
