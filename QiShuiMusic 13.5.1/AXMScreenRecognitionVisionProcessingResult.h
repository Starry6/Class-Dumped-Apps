@interface AXMScreenRecognitionVisionProcessingResult : NSObject
@property (nonatomic) BOOL sameScreenCapResult;
@property (nonatomic) NSData screenEquivalenceToken;
@property (nonatomic) NSArray sortedFeatures;
- (void).cxx_destruct;
- (id)sortedFeatures;
- (BOOL)sameScreenCapResult;
- (void)setSameScreenCapResult:;
- (id)screenEquivalenceToken;
- (void)setScreenEquivalenceToken:;
- (void)setSortedFeatures:;
@end
