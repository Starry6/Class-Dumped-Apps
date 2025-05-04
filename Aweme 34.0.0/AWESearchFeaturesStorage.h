@interface AWESearchFeaturesStorage : NSObject
@property (nonatomic) NSDictionary sendBackInfo;
@property (nonatomic) NSString sendBackStr;
@property (nonatomic) double updateTimestamp;
- (void)resetUpdateTimeStamp;
- (id)fetchSendBackInfo;
- (void)storeSendBackInfo:;
- (void)storeFeaturesInfo;
- (void)storeSendBackStr:;
- (id)fetchSendBackStr;
- (id)sendBackInfo;
- (void)setSendBackInfo:;
- (id)sendBackStr;
- (void)setSendBackStr:;
- (id)init;
- (void).cxx_destruct;
- (double)updateTimestamp;
- (void)setUpdateTimestamp:;
+ (id)shareInstance;
@end
