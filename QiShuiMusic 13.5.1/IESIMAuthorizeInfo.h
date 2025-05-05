@interface IESIMAuthorizeInfo : NSObject
@property (nonatomic) NSString access_token;
@property (nonatomic) NSString open_id;
@property (nonatomic) NSString x_tt_token;
@property (nonatomic) NSString sec_uid;
@property (nonatomic) Q authorizeMethod;
- (id)open_id;
- (id)sec_uid;
- (unsigned long long)authorizeMethod;
- (id)access_token;
- (id)initWithAuthMethod:;
- (void)setAccess_token:;
- (void)setOpen_id:;
- (void)setSec_uid:;
- (void)setX_tt_token:;
- (id)x_tt_token;
- (void).cxx_destruct;
@end
