@interface HTSLiveUMGWConnectionInfo : GPBMessage
@property (nonatomic) q fetchInterval;
@property (nonatomic) NSInteger fetchType;
@property (nonatomic) NSString wssURL;
@property (nonatomic) q heartbeatDuration;
+ (id)descriptor;
@end
