@interface BDWebImageLoadConfig : NSObject
@property (nonatomic) Q failedRetryCount;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) Q maxDownloadTaskCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)maxDownloadTaskCount;
- (void)setMaxDownloadTaskCount:;
- (void)setFailedRetryCount:;
- (double)timeoutInterval;
- (unsigned long long)failedRetryCount;
- (void)setTimeoutInterval:;
+ (id)modelCustomPropertyMapper;
@end
