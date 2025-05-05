@interface IDSSignInServiceUserInfo : NSObject
@property (nonatomic) Q type;
@property (nonatomic) Q status;
- (unsigned long long)type;
- (id)description;
- (unsigned long long)status;
- (id)initWithUserType:status:;
@end
