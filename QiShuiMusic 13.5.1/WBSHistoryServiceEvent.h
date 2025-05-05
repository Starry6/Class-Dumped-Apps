@interface WBSHistoryServiceEvent : NSObject
@property (nonatomic) q eventID;
@property (nonatomic) NSString eventType;
@property (nonatomic) NSDate time;
@property (nonatomic) NSDictionary value;
- (id)init;
- (id)time;
- (long long)eventID;
- (id)eventType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)value;
- (id)initWithEventID:type:time:value:;
- (id)initWithType:time:value:;
+ (BOOL)supportsSecureCoding;
@end
