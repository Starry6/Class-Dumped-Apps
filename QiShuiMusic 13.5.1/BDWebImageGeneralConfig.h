@interface BDWebImageGeneralConfig : NSObject
@property (nonatomic) Q fetchInterval;
@property (nonatomic) Q remoteConfigTimestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)remoteConfigTimestamp;
- (void)setRemoteConfigTimestamp:;
- (unsigned long long)fetchInterval;
- (void)setFetchInterval:;
+ (id)modelCustomPropertyMapper;
@end
