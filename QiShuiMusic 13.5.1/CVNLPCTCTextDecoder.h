@interface CVNLPCTCTextDecoder : CVNLPTextDecoder
@property (nonatomic) CVNLPActivationMatrix activationMatrix;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)initWithLanguageResourceBundle:;
- (id)decodingResultForKBestPaths:withBeamWidth:;
- (id)decodingResultForKBestPaths:withBeamWidth:context:;
- (id)decodingResultWithConfiguration:withContext:;
- (id)greedyDecodingResult;
- (id)greedyDecodingResultWithConfiguration:;
- (id)decodingResultForKBestPaths:withBeamWidth:context:optimizeAlignment:;
- (id)activationMatrix;
- (void)setActivationMatrix:;
@end
