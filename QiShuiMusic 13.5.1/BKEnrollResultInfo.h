@interface BKEnrollResultInfo : NSObject
@property (nonatomic) BKIdentity enrolledIdentity;
- (void).cxx_destruct;
- (id)initWithServerIdentity:details:device:;
- (id)enrolledIdentity;
- (void)setEnrolledIdentity:;
@end
