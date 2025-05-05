@interface IESGurdRegisterModel : NSObject
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSString version;
@property (nonatomic) NSDictionary customParams;
@property (nonatomic) BOOL isRegister;
- (id)customParams;
- (BOOL)isRegister;
- (void)setCustomParams:;
- (void)setIsRegister:;
- (void)setVersion:;
- (id)version;
- (void).cxx_destruct;
- (id)accessKey;
- (void)setAccessKey:;
@end
