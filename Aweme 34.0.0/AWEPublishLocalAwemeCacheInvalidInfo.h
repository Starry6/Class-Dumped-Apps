@interface AWEPublishLocalAwemeCacheInvalidInfo : NSObject
@property (nonatomic) NSString awemeID;
@property (nonatomic) q errorCode;
@property (nonatomic) NSString errorReason;
@property (nonatomic) NSString extraErrorMsg;
- (void)setAwemeID:;
- (id)awemeID;
- (void)setExtraErrorMsg:;
- (id)extraErrorMsg;
- (void)setErrorCode:;
- (long long)errorCode;
- (id)errorReason;
- (void).cxx_destruct;
+ (id)infoWithAwemeID:errorCode:extraErrorMsg:;
@end
