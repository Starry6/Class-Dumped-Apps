@interface CXSetTrashedVoicemailAction : CXVoicemailAction
@property (nonatomic) BOOL trashed;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)customDescription;
- (void)setTrashed:;
- (BOOL)isTrashed;
- (void)updateSanitizedCopy:withZone:;
- (id)initWithVoicemailUUID:trashed:;
+ (BOOL)supportsSecureCoding;
@end
