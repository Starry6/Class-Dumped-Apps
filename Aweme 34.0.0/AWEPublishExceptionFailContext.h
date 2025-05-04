@interface AWEPublishExceptionFailContext : AWEPublishExceptionBaseContext
@property (nonatomic) NSError error;
@property (nonatomic) NSDictionary publishFailParams;
- (id)publishFailParams;
- (void)setPublishFailParams:;
- (void)setError:;
- (void).cxx_destruct;
- (id)error;
@end
