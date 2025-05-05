@interface AFBluetoothHeadphoneInEarDetectionState : NSObject
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) q primaryEarbudSide;
@property (nonatomic) q primaryInEarStatus;
@property (nonatomic) q secondaryInEarStatus;
- (long long)primaryInEarStatus;
- (id)init;
- (long long)secondaryInEarStatus;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEnabled;
- (id)initWithIsEnabled:primaryEarbudSide:primaryInEarStatus:secondaryInEarStatus:;
- (long long)primaryEarbudSide;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
