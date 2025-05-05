@interface CTDataConnectionAvailabilityStatus : NSObject
@property (nonatomic) BOOL available;
@property (nonatomic) NSInteger csiError;
- (BOOL)available;
- (id)initWithCoder:;
- (void)setAvailable:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (int)csiError;
- (void)setCsiError:;
+ (BOOL)supportsSecureCoding;
@end
