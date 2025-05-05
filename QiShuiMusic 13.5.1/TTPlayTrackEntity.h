@interface TTPlayTrackEntity : NSManagedObject
@property (nonatomic) NSString eventJSON;
@property (nonatomic) double order;
@property (nonatomic) NSInteger previewStatus;
@property (nonatomic) NSString queueID;
@property (nonatomic) NSDate timestamp;
@property (nonatomic) NSString trackID;
@property (nonatomic) NSString trackJSON;
@property (nonatomic) NSString trackType;
- (id)initWithEntity:insertIntoManagedObjectContext:;
@end
