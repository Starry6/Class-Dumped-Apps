@interface CVNLPCaptionSensitiveImageParameters : NSObject
@property (nonatomic) NSString visionIdentifier;
@property (nonatomic) double minConfidence;
@property (nonatomic) NSArray blockingTokens;
- (void).cxx_destruct;
- (id)initWithVisionIdentifier:minConfidence:commonBlockingTokens:categoryBlockingTokens:categoryBlockingTokensAnnex:;
- (id)visionIdentifier;
- (double)minConfidence;
- (id)blockingTokens;
@end
