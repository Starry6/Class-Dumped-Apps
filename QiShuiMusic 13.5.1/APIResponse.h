@interface APIResponse : NSObject
@property (nonatomic) NSInteger detailRetCode;
@property (nonatomic) NSInteger retCode;
@property (nonatomic) NSInteger seq;
@property (nonatomic) NSString errorMsg;
@property (nonatomic) NSDictionary jsonResponse;
@property (nonatomic) NSString message;
@property (nonatomic) @ userData;
- (int)retCode;
- (int)detailRetCode;
- (id)errorMsg;
- (id)jsonResponse;
- (void)setDetailRetCode:;
- (void)setErrorMsg:;
- (void)setJsonResponse:;
- (void)setRetCode:;
- (void)setMessage:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setUserData:;
- (id)message;
- (void).cxx_destruct;
- (id)userData;
- (void)setSeq:;
- (int)seq;
+ (BOOL)supportsSecureCoding;
@end
