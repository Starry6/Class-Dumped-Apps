@interface CXSetRelayingCallAction : CXCallAction
@property (nonatomic) BOOL relaying;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)customDescription;
- (id)sanitizedCopyWithZone:;
- (void)updateCopy:withZone:;
- (BOOL)isRelaying;
- (id)initWithCallUUID:relaying:;
- (void)setRelaying:;
+ (BOOL)supportsSecureCoding;
@end
