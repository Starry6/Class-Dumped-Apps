@interface CXSetPlayedVoicemailAction : CXVoicemailAction
@property (nonatomic) BOOL played;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)customDescription;
- (BOOL)isPlayed;
- (void)setPlayed:;
- (void)updateSanitizedCopy:withZone:;
- (id)initWithVoicemailUUID:played:;
+ (BOOL)supportsSecureCoding;
@end
