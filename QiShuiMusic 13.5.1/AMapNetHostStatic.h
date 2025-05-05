@interface AMapNetHostStatic : NSObject
@property (nonatomic) NSString host;
@property (nonatomic) NSNumber requestCount;
@property (nonatomic) NSNumber faileCount;
- (id)faileCount;
- (void)setFaileCount:;
- (void)setRequestCount:;
- (id)host;
- (void)setHost:;
- (void).cxx_destruct;
- (id)requestCount;
@end
