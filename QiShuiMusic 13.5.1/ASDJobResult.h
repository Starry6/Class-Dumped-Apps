@interface ASDJobResult : NSObject
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSError error;
@property (nonatomic) NSNumber persistentID;
@property (nonatomic) q status;
- (id)error;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (long long)status;
- (id)bundleID;
- (id)copyWithZone:;
- (id)persistentID;
+ (id)resultWithInvalidActivity:bundleID:;
+ (id)resultWithPersistentID:bundleID:status:error:;
+ (BOOL)supportsSecureCoding;
+ (id)resultWithRestrictedActivity:bundleID:;
+ (id)resultWithExistingActivity:bundleID:;
+ (id)resultWithValidActivity:bundleID:;
@end
