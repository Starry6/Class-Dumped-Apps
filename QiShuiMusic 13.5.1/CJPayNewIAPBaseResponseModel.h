@interface CJPayNewIAPBaseResponseModel : NSObject
@property (nonatomic) NSString code;
@property (nonatomic) NSString msg;
@property (nonatomic) NSString status;
- (BOOL)isSuccess;
- (void)setStatus:;
- (id)code;
- (void).cxx_destruct;
- (id)status;
- (void)setCode:;
- (id)msg;
- (void)setMsg:;
@end
