@interface JSONAPIRPCErrorModel : JSONModel
@property (nonatomic) NSInteger code;
@property (nonatomic) NSString message;
@property (nonatomic) <Optional> data;
- (void)setMessage:;
- (id)data;
- (int)code;
- (id)message;
- (void).cxx_destruct;
- (void)setData:;
- (void)setCode:;
@end
