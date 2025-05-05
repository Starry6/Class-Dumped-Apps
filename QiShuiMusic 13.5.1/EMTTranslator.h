@interface EMTTranslator : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> callbackQueue;
- (void)setCallbackQueue:;
- (id)callbackQueue;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithModelURLs:task:skipNonFinalToCatchup:;
- (void)translateString:from:to:completion:;
- (id)initWithModelURL:;
- (id)initWithModelURL:task:;
- (id)initWithModelURL:task:skipNonFinalToCatchup:;
- (id)initWithModelURL:task:skipNonFinalToCatchup:translatorCacheSize:;
- (id)initWithModelURLs:task:;
- (id)initWithModelURLs:task:skipNonFinalToCatchup:translatorCacheSize:;
- (void)loadTranslatorFrom:to:;
- (void)translateSpeech:completion:;
- (void)translateSpeech:from:to:completion:;
- (void)translateString:completion:;
- (void)translateTokens:from:to:completion:;
- (void)translateTokens:from:to:spans:completion:;
- (void)translateTokens:isFinal:completion:;
- (void)translateTokens:isFinal:spans:completion:;
- (void)prepareFor:to:;
- (id)_tokenizeString:;
- (id)_prepareFor:to:;
- (void)_dispatchTranslationRequest:isFinal:spans:translator:sourceLocale:targetLocale:completion:;
- (void)getTranslatorWithCompletion:;
@end
