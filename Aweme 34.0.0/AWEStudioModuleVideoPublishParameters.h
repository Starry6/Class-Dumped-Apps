@interface AWEStudioModuleVideoPublishParameters : NSObject
@property (nonatomic) NSString appKey;
@property (nonatomic) NSString videoHostName;
@property (nonatomic) NSString authorization;
@property (nonatomic) NSString fileHostName;
@property (nonatomic) NSDictionary authorization2;
- (void)setAppKey:;
- (id)appKey;
- (void)setVideoHostName:;
- (void)setFileHostName:;
- (void)setAuthorization2:;
- (id)authorization2;
- (id)videoHostName;
- (id)fileHostName;
- (id)authorization;
- (void)setAuthorization:;
- (void).cxx_destruct;
@end
