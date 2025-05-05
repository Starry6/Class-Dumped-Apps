@interface MFSignatures : NSObject
- (void)setSignature:;
- (id)init;
- (id)signature;
- (id)_modelSpecificLocalizedStringKeyForKey:;
- (id)defaultSignature;
- (id)_getValue:;
- (void)clearSignature;
- (BOOL)useAccountSignatures;
- (void)setUseAccountSignatures:;
- (id)signatureForAccount:;
- (void)setSignature:forAccount:;
- (id)signatureForSendingEmailAddress:;
- (void)setSignature:forEmailAddress:;
- (id)signatureMarkupForSendingEmailAddress:;
- (id)signaturePlainTextForSendingEmailAddress:;
+ (id)sharedInstance;
+ (id)signatureMarkupFormat:;
+ (id)signaturePlainTextFormat:;
@end
