@interface MFFollowUpWarningResult : NSObject
@property (nonatomic) SGMailIntelligenceFollowUpWarning followUpWarning;
@property (nonatomic) NSError error;
- (id)error;
- (void).cxx_destruct;
- (id)initWithFollowUpWarning:error:;
- (id)followUpWarning;
@end
