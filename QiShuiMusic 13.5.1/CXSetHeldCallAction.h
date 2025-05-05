@interface CXSetHeldCallAction : CXCallAction
@property (nonatomic) BOOL onHold;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)customDescription;
- (BOOL)isOnHold;
- (void)setOnHold:;
- (void)updateSanitizedCopy:withZone:;
- (id)initWithCallUUID:onHold:;
+ (BOOL)supportsSecureCoding;
@end
