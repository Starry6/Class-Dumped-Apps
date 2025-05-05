@interface BTDPingItem : NSObject
@property (nonatomic) NSString originalAddress;
@property (nonatomic) NSString IPAddress;
@property (nonatomic) Q dateBytesLength;
@property (nonatomic) double timeMilliseconds;
@property (nonatomic) q timeToLive;
@property (nonatomic) q ICMPSequence;
@property (nonatomic) q status;
- (long long)ICMPSequence;
- (unsigned long long)dateBytesLength;
- (void)setDateBytesLength:;
- (void)setICMPSequence:;
- (void)setIPAddress:;
- (void)setTimeMilliseconds:;
- (double)timeMilliseconds;
- (void)setStatus:;
- (long long)timeToLive;
- (void)setTimeToLive:;
- (void).cxx_destruct;
- (id)description;
- (long long)status;
- (id)originalAddress;
- (void)setOriginalAddress:;
- (id)IPAddress;
+ (id)statisticsWithPingItems:;
@end
