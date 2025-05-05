@interface CXCallAction : CXAction
@property (nonatomic) NSUUID callUUID;
- (id)init;
- (id)initWithCoder:;
- (void)setCallUUID:;
- (void)encodeWithCoder:;
- (id)callUUID;
- (void).cxx_destruct;
- (id)customDescription;
- (id)copyWithZone:;
- (id)sanitizedCopyWithZone:;
- (void)updateSanitizedCopy:withZone:;
- (id)initWithCallUUID:;
+ (BOOL)supportsSecureCoding;
@end
