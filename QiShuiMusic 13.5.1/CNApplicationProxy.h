@interface CNApplicationProxy : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString teamIdentifier;
@property (nonatomic) NSString localizedName;
@property (nonatomic) NSArray activityTypes;
- (void)setLocalizedName:;
- (id)init;
- (id)bundleIdentifier;
- (id)teamIdentifier;
- (id)localizedName;
- (void)setActivityTypes:;
- (id)initWithCoder:;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (void)setTeamIdentifier:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLSApplicationProxy:;
- (id)activityTypes;
- (id)initWithBundleIdentifier:teamIdentifier:localizedName:activityTypes:;
+ (BOOL)supportsSecureCoding;
@end
