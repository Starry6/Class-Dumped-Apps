@interface EKAlarmOccurrence : NSObject
@property (nonatomic) CADObjectID alarmID;
@property (nonatomic) CADObjectID ownerID;
@property (nonatomic) NSDate ownerDate;
@property (nonatomic) NSTimeZone ownerTimeZone;
@property (nonatomic) NSURL ownerURI;
@property (nonatomic) NSDate fireDate;
@property (nonatomic) NSString externalID;
@property (nonatomic) NSDate acknowledgedDate;
- (id)alarmID;
- (id)externalID;
- (id)initWithCoder:;
- (id)initWithDictionaryRepresentation:;
- (void)encodeWithCoder:;
- (id)acknowledgedDate;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)fireDate;
- (id)ownerID;
- (id)initWithAlarmID:ownerID:ownerDate:ownerTimeZone:ownerURI:fireDate:externalID:acknowledgedDate:;
- (id)ownerDate;
- (id)ownerTimeZone;
- (id)ownerURI;
+ (id)alarmOccurrenceWithAlarmID:ownerID:ownerDate:ownerTimeZone:ownerURI:fireDate:externalID:acknowledgedDate:;
@end
