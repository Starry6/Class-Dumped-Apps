@interface PlayedTrackEntity : NSManagedObject
@property (nonatomic) NSString trackID;
@property (nonatomic) NSString trackQuality;
@property (nonatomic) NSString mediaType;
@property (nonatomic) NSDate lastPlayedDate;
@property (nonatomic) NSString queueType;
@property (nonatomic) NSString queueId;
@property (nonatomic) NSString subQueueType;
@property (nonatomic) NSString mediaTag;
@property (nonatomic) q mediaSizeByte;
- (id)initWithEntity:insertIntoManagedObjectContext:;
@end
