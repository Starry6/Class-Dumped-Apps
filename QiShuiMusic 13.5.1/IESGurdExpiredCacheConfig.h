@interface IESGurdExpiredCacheConfig : NSObject
@property (nonatomic) NSInteger expireAge;
@property (nonatomic) NSInteger cleanType;
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSDictionary channelsMap;
- (void)setChannelsMap:;
- (id)channelsMap;
- (int)cleanType;
- (int)expireAge;
- (void)setCleanType:;
- (void)setExpireAge:;
- (void).cxx_destruct;
- (id)accessKey;
- (void)setAccessKey:;
@end
