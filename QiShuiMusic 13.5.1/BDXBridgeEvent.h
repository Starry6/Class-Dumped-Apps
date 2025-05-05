@interface BDXBridgeEvent : NSObject
@property (nonatomic) double bdx_timestamp;
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSString eventID;
@property (nonatomic) BOOL isBroadcast;
- (double)bdx_timestamp;
- (void)bdx_updateTimestampWithCurrentDate;
- (void)bdx_updateTimestampWithMillisecondTimestamp:;
- (id)initWithEventName:params:isBroadcast:;
- (void)setBdx_timestamp:;
- (void)setEventID:;
- (id)eventID;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)description;
- (id)params;
- (BOOL)isBroadcast;
- (void)setParams:;
- (void)setIsBroadcast:;
+ (id)eventWithEventName:params:;
+ (id)eventWithEventName:params:eventID:isBroadcast:;
+ (id)eventWithEventName:params:isBroadcast:;
@end
