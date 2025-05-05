@interface MRCryptoPairingSessionBlockDelegate : NSObject
@property (nonatomic) @? dataExchangeBlock;
@property (nonatomic) @? showSetupCodeBlock;
@property (nonatomic) @? hideSetupCodeBlock;
@property (nonatomic) @? promptForSetupCodeBlock;
@property (nonatomic) @? exchangeCompleteBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)pairingSession:showSetupCode:;
- (void)pairingSessionHideSetupCode:;
- (void)pairingSession:promptForSetupCodeWithDelay:completion:;
- (void)pairingSession:didCompleteExchangeWithError:;
- (void)pairingSession:didPrepareExchangeData:;
- (void)pairingSession:promptForSetupCodeWithCompletion:;
- (id)dataExchangeBlock;
- (void)setDataExchangeBlock:;
- (id)showSetupCodeBlock;
- (void)setShowSetupCodeBlock:;
- (id)hideSetupCodeBlock;
- (void)setHideSetupCodeBlock:;
- (id)promptForSetupCodeBlock;
- (void)setPromptForSetupCodeBlock:;
- (id)exchangeCompleteBlock;
- (void)setExchangeCompleteBlock:;
@end
