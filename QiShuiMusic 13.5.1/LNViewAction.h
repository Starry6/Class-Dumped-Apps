@interface LNViewAction : NSObject
@property (nonatomic) NSString actionIdentifier;
@property (nonatomic) q viewIdentifier;
@property (nonatomic) {LNViewLocation=dddddd} location;
- (id)initWithCoder:;
- (id)location;
- (void)encodeWithCoder:;
- (id)actionIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (long long)viewIdentifier;
- (id)initWithActionIdentifier:viewIdentifier:location:;
+ (BOOL)supportsSecureCoding;
@end
