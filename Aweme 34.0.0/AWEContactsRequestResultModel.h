@interface AWEContactsRequestResultModel : NSObject
@property (nonatomic) NSError error;
@property (nonatomic) BOOL isPermitted;
@property (nonatomic) BOOL isFirstRequestTime;
@property (nonatomic) BOOL isRefused;
- (BOOL)isFirstRequestTime;
- (void)setIsFirstRequestTime:;
- (void)setIsPermitted:;
- (void)setIsRefused:;
- (BOOL)isRefused;
- (BOOL)isPermitted;
- (void)setError:;
- (void).cxx_destruct;
- (id)error;
@end
