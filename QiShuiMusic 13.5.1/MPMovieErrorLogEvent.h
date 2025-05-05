@interface MPMovieErrorLogEvent : NSObject
@property (nonatomic) NSDate date;
@property (nonatomic) NSString URI;
@property (nonatomic) NSString serverAddress;
@property (nonatomic) NSString playbackSessionID;
@property (nonatomic) q errorStatusCode;
@property (nonatomic) NSString errorDomain;
@property (nonatomic) NSString errorComment;
- (id)errorDomain;
- (id)URI;
- (id)date;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)serverAddress;
- (id)playbackSessionID;
- (long long)errorStatusCode;
- (id)errorComment;
- (id)_initWithAVItemErrorLogEvent:;
@end
