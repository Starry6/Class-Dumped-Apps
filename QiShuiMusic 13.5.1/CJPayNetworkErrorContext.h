@interface CJPayNetworkErrorContext : NSObject
@property (nonatomic) NSError error;
@property (nonatomic) NSString urlStr;
- (void)setUrlStr:;
- (id)urlStr;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
@end
