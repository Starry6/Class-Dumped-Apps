@interface CXSetVideoPresentationStateCallAction : CXCallAction
@property (nonatomic) q videoPresentationState;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)customDescription;
- (id)sanitizedCopyWithZone:;
- (void)updateCopy:withZone:;
- (long long)videoPresentationState;
- (id)initWithCallUUID:videoPresentationState:;
- (void)setVideoPresentationState:;
+ (BOOL)supportsSecureCoding;
@end
