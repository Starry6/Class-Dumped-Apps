@interface ByteRTCScreenCaptureSourceInfo : NSObject
@property (nonatomic) Q sourceType;
@property (nonatomic) q sourceId;
@property (nonatomic) NSString sourceName;
@property (nonatomic) NSString application;
@property (nonatomic) NSInteger pid;
@property (nonatomic) BOOL primaryMonitor;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} regionRect;
- (id)regionRect;
- (void)setRegionRect:;
- (BOOL)primaryMonitor;
- (void)setPrimaryMonitor:;
- (id)sourceName;
- (void)setSourceName:;
- (unsigned long long)sourceType;
- (void)setApplication:;
- (void)setSourceType:;
- (int)pid;
- (void).cxx_destruct;
- (void)setSourceId:;
- (long long)sourceId;
- (void)setPid:;
- (id)application;
@end
