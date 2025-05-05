@interface CKLocationSortDescriptor : NSSortDescriptor
@property (nonatomic) CLLocation relativeLocation;
- (id)initWithCoder:;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (long long)compareObject:toObject:;
- (id)initWithKey:relativeLocation:;
- (id)relativeLocation;
+ (BOOL)supportsSecureCoding;
@end
