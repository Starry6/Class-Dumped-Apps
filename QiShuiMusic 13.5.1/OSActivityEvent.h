@interface OSActivityEvent : NSObject
@property (nonatomic) {timeval=qi} timeGMT;
@property (nonatomic) {timezone=ii} tz;
@property (nonatomic) NSString timezoneName;
@property (nonatomic) NSInteger processID;
@property (nonatomic) Q processUniqueID;
@property (nonatomic) NSUUID processImageUUID;
@property (nonatomic) NSString processImagePath;
@property (nonatomic) NSString process;
@property (nonatomic) Q eventType;
@property (nonatomic) Q parentActivityID;
@property (nonatomic) Q activityID;
@property (nonatomic) Q traceID;
@property (nonatomic) Q threadID;
@property (nonatomic) Q machTimestamp;
@property (nonatomic) NSDate timestamp;
@property (nonatomic) NSTimeZone timezone;
@property (nonatomic) NSUUID senderImageUUID;
@property (nonatomic) NSString senderImagePath;
@property (nonatomic) NSString sender;
@property (nonatomic) NSString eventMessage;
@property (nonatomic) BOOL persisted;
- (int)processID;
- (id)processImageUUID;
- (id)senderImagePath;
- (id)processImagePath;
- (id)timezone;
- (id)sender;
- (unsigned long long)threadID;
- (id)senderImageUUID;
- (unsigned long long)eventType;
- (id)process;
- (id)properties;
- (unsigned long long)traceID;
- (void).cxx_destruct;
- (id)timestamp;
- (id)description;
- (id)timezoneName;
- (unsigned long long)activityID;
- (unsigned long long)machTimestamp;
- (void)_initWithProperties:;
- (id)eventMessage;
- (void)setTimezoneName:;
- (BOOL)persisted;
- (void)_addProperties:;
- (void)fillFromStreamEntry:eventMessage:persisted:;
- (unsigned long long)processUniqueID;
- (unsigned long long)parentActivityID;
- (void)setEventMessage:;
- (id)timeGMT;
- (id)tz;
+ (id)activityEventFromStreamEntry:;
@end
