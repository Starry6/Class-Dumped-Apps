@interface AWEXPlayOpenServiceResp : NSObject
@property (nonatomic) q respCode;
@property (nonatomic) NSString message;
@property (nonatomic) NSDictionary data;
- (void)setRespCode:;
- (long long)respCode;
- (id)message;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (void)setMessage:;
+ (id)responseWithCode:message:data:;
@end
