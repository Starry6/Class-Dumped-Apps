@interface CRCVNLPTransientResult : NSObject
@property (nonatomic) CVNLPTextDecodingResult greedyDecodingResult;
@property (nonatomic) CVNLPActivationMatrix activationMatrix;
@property (nonatomic) NSString decodingLocale;
@property (nonatomic) NSObject<OS_dispatch_semaphore> languageRecognitionActiveSem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)greedyDecodingResult;
- (id)activationMatrix;
- (void)setActivationMatrix:;
- (id)initWithActivationMatrix:decodingLocale:;
- (void)setGreedyDecodingResult:;
- (id)decodingLocale;
- (void)setDecodingLocale:;
- (id)languageRecognitionActiveSem;
- (void)setLanguageRecognitionActiveSem:;
@end
