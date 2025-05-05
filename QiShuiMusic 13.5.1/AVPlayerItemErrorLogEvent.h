@interface AVPlayerItemErrorLogEvent : NSObject
@property (nonatomic) NSDate date;
@property (nonatomic) NSString URI;
@property (nonatomic) NSString serverAddress;
@property (nonatomic) NSString playbackSessionID;
@property (nonatomic) q errorStatusCode;
@property (nonatomic) NSString errorDomain;
@property (nonatomic) NSString errorComment;
- (id)errorDomain;
- (id)init;
- (void)dealloc;
- (id)URI;
- (id)initWithDictionary:;
- (id)date;
- (id)copyWithZone:;
- (id)_common_init;
- (id)serverAddress;
- (id)playbackSessionID;
- (long long)errorStatusCode;
- (id)errorComment;
@end
