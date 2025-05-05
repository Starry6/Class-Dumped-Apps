@interface AMSPACTokenTask : AMSTask
@property (nonatomic) NSString simLabelID;
@property (nonatomic) NSData signingData;
- (void).cxx_destruct;
- (id)perform;
- (id)initWithSimLabelID:;
- (id)simLabelID;
- (id)signingData;
- (void)setSigningData:;
+ (id)tokenForSimLabelID:withQueue:signingData:;
+ (id)signatureMapFromServerSignatures:;
+ (id)signatureForSimLabelID:fromSignatures:;
@end
