@interface HMDHTTPResponseInfo : NSObject
@property (nonatomic) double endTime;
@property (nonatomic) NSString responseScene;
@property (nonatomic) q isForeground;
@property (nonatomic) double inAppTime;
- (double)inAppTime;
- (id)responseScene;
- (void)setInAppTime:;
- (void)setResponseScene:;
- (id)init;
- (long long)isForeground;
- (void)setEndTime:;
- (double)endTime;
- (void)setIsForeground:;
- (void).cxx_destruct;
@end
