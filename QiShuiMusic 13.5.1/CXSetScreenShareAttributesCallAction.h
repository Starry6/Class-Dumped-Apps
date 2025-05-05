@interface CXSetScreenShareAttributesCallAction : CXCallAction
@property (nonatomic) CXScreenShareAttributes attributes;
- (id)initWithCoder:;
- (void)setAttributes:;
- (id)attributes;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)customDescription;
- (id)sanitizedCopyWithZone:;
- (void)updateCopy:withZone:;
- (id)initWithCallUUID:attributes:;
+ (BOOL)supportsSecureCoding;
@end
