@interface CXPlayDTMFCallAction : CXCallAction
@property (nonatomic) NSString digits;
@property (nonatomic) q type;
- (void)setType:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (id)digits;
- (void).cxx_destruct;
- (id)customDescription;
- (void)setDigits:;
- (void)updateSanitizedCopy:withZone:;
- (id)initWithCallUUID:digits:type:;
+ (BOOL)supportsSecureCoding;
@end
