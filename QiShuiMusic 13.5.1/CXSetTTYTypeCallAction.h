@interface CXSetTTYTypeCallAction : CXCallAction
@property (nonatomic) q ttyType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)customDescription;
- (long long)ttyType;
- (void)setTtyType:;
- (id)sanitizedCopyWithZone:;
- (void)updateCopy:withZone:;
- (id)initWithCallUUID:ttyType:;
+ (BOOL)supportsSecureCoding;
@end
