@interface SSVMediaSocialAdminStatus : NSObject
@property (nonatomic) NSDate dateUpdated;
@property (nonatomic) BOOL admin;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isAdmin;
- (id)dateUpdated;
- (id)initWithAdminStatus:dateUpdated:;
+ (BOOL)supportsSecureCoding;
@end
