@interface WBSReaderAvailabilityCheckResult : NSObject
@property (nonatomic) BOOL readerAvailable;
@property (nonatomic) BOOL isSameDocumentNavigation;
@property (nonatomic) NSArray textSamples;
@property (nonatomic) BOOL doesPageUseSearchEngineOptimizationMetadata;
@property (nonatomic) NSURL canonicalURL;
- (BOOL)isReaderAvailable;
- (BOOL)doesPageUseSearchEngineOptimizationMetadata;
- (id)initWithCoder:;
- (void)setDoesPageUseSearchEngineOptimizationMetadata:;
- (void)encodeWithCoder:;
- (void)setReaderAvailable:;
- (void).cxx_destruct;
- (id)description;
- (id)canonicalURL;
- (id)copyWithZone:;
- (void)setCanonicalURL:;
- (BOOL)isSameDocumentNavigation;
- (id)textSamples;
- (void)setIsSameDocumentNavigation:;
- (void)setTextSamples:;
+ (BOOL)supportsSecureCoding;
@end
