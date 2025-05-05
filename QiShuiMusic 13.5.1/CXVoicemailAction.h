@interface CXVoicemailAction : CXAction
@property (nonatomic) NSUUID voicemailUUID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)customDescription;
- (id)copyWithZone:;
- (id)sanitizedCopyWithZone:;
- (id)initWithVoicemailUUID:;
- (void)updateSanitizedCopy:withZone:;
- (id)voicemailUUID;
- (void)setVoicemailUUID:;
+ (BOOL)supportsSecureCoding;
@end
