@interface CMSleepData : NSObject
@property (nonatomic) Q recordId;
@property (nonatomic) NSUUID sourceId;
@property (nonatomic) NSUUID sessionId;
@property (nonatomic) NSDate eventTime;
@property (nonatomic) q eventType;
- (id)sessionId;
- (void)dealloc;
- (unsigned long long)recordId;
- (long long)eventType;
- (id)initWithCoder:;
- (id)eventTime;
- (void)encodeWithCoder:;
- (id)description;
- (id)sourceId;
- (id)copyWithZone:;
- (void)convertToSpringTrackerEntry:;
- (id)initWithRecordId:sourceId:sessionId:eventTime:eventType:;
- (id)initWithSessionId:;
- (id)initWithSpringEntry:;
+ (BOOL)supportsSecureCoding;
+ (id)eventTypeName:;
@end
