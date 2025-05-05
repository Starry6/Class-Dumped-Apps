@interface PPSocialPerson : NSObject
@property (nonatomic) NSString handle;
@property (nonatomic) NSString displayName;
- (id)handle;
- (id)initWithCoder:;
- (id)displayName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithHandle:displayName:;
+ (BOOL)supportsSecureCoding;
@end
