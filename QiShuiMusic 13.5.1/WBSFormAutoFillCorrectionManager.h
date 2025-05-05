@interface WBSFormAutoFillCorrectionManager : NSObject
@property (nonatomic) <WBSFormAutoFillCorrectionManagerDelegate> delegate;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithCorrectionsStore:;
- (void)getCorrectionsForFormFieldFingerprint:onDomain:completionHandler:;
- (void)_setCorrections:forFingerprint:onDomain:;
- (void)setCorrectionSet:;
- (id)_feedbackProcessor;
@end
