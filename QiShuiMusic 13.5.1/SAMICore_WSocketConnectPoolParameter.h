@interface SAMICore_WSocketConnectPoolParameter : NSObject
@property (nonatomic) NSString business;
@property (nonatomic) NSString url;
@property (nonatomic) NSInteger enable;
@property (nonatomic) NSInteger poolSize;
@property (nonatomic) NSInteger retryCount;
@property (nonatomic) NSString header;
- (void)setHeader:;
- (int)enable;
- (id)url;
- (void)dealloc;
- (void)setRetryCount:;
- (void)setUrl:;
- (int)retryCount;
- (id)header;
- (void)setEnable:;
- (id)business;
- (void)setBusiness:;
- (int)poolSize;
- (void)setPoolSize:;
@end
