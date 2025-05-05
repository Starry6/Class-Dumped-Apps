@interface CXSetMutedCallAction : CXCallAction
@property (nonatomic) BOOL muted;
- (void)setMuted:;
- (BOOL)isMuted;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)customDescription;
- (void)updateSanitizedCopy:withZone:;
- (id)initWithCallUUID:muted:;
+ (BOOL)supportsSecureCoding;
@end
