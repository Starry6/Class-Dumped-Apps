@interface TTAccountDouyinOneAuthSubResult : NSObject
@property (nonatomic) NSString type;
@property (nonatomic) q result;
@property (nonatomic) NSError error;
- (long long)result;
- (void)setError:;
- (void)setType:;
- (id)error;
- (id)type;
- (void).cxx_destruct;
- (void)setResult:;
@end
