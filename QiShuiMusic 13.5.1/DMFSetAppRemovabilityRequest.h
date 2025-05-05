@interface DMFSetAppRemovabilityRequest : DMFAppRequest
@property (nonatomic) NSNumber removable;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)removable;
- (void)setRemovable:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
