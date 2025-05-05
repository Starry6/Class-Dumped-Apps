@interface CADChangeTrackingClientId : NSObject
@property (nonatomic) NSString suffix;
@property (nonatomic) NSString customClientId;
@property (nonatomic) BOOL hasCustomClientId;
- (id)clientId;
- (BOOL)hasCustomClientId;
- (id)initWithSuffix:;
- (id)suffix;
- (id)initWithCustomClientId:;
- (id)initWithCoder:;
- (BOOL)hasSuffix;
- (void)encodeWithCoder:;
- (id)clientIdWithBundleId:;
- (void).cxx_destruct;
- (id)description;
- (id)customClientId;
- (BOOL)isEqualToChangeTrackingClientId:;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
