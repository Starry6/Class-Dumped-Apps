@interface TCOError : NSObject
@property (nonatomic) q code;
@property (nonatomic) NSString msg;
- (long long)code;
- (void).cxx_destruct;
- (void)setCode:;
- (id)msg;
- (void)setMsg:;
+ (id)getLastOAuthError;
+ (id)getLastQQApiError;
+ (void)setLastOAuthError:msg:;
+ (void)setLastQQApiError:msg:;
@end
