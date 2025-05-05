@interface BNSSOAuthUserInfo : NSObject
@property (nonatomic) NSString user;
@property (nonatomic) NSString employee_id;
@property (nonatomic) NSString email;
@property (nonatomic) NSString full_name;
@property (nonatomic) NSString name;
- (void)setEmployee_id:;
- (id)employee_id;
- (id)full_name;
- (void)setFull_name:;
- (void)setUser:;
- (void)setName:;
- (void)setEmail:;
- (id)user;
- (void).cxx_destruct;
- (id)email;
- (id)name;
@end
