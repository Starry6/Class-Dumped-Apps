@interface PIANSRModel : NSObject
@property (nonatomic) NSString HTML;
@property (nonatomic) NSString URLString;
@property (nonatomic) BOOL reuse;
@property (nonatomic) q expires;
@property (nonatomic) double createTime;
@property (nonatomic) PIAWorker worker;
@property (nonatomic) @? completion;
- (BOOL)reuse;
- (void)setReuse:;
- (id)completion;
- (void)setCompletion:;
- (id)URLString;
- (double)createTime;
- (long long)expires;
- (void).cxx_destruct;
- (void)setCreateTime:;
- (void)setExpires:;
- (void)setURLString:;
- (id)worker;
- (void)setWorker:;
- (id)HTML;
- (void)setHTML:;
@end
