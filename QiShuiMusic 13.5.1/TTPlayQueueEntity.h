@interface TTPlayQueueEntity : NSManagedObject
@property (nonatomic) NSString entityID;
@property (nonatomic) NSString infoJSON;
@property (nonatomic) NSString name;
@property (nonatomic) NSDate refreshDate;
@property (nonatomic) NSString source;
@property (nonatomic) NSString sourceEvent;
@property (nonatomic) NSString sourceID;
@property (nonatomic) NSString sourceTrackID;
@property (nonatomic) NSString stateJSON;
@property (nonatomic) NSDate timestamp;
@property (nonatomic) NSString trackEvent;
@property (nonatomic) NSString url;
@property (nonatomic) NSString sceneName;
@property (nonatomic) NSString extraInfo;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSInteger cursor;
@property (nonatomic) BOOL prevHasMore;
@property (nonatomic) NSInteger prevCursor;
@property (nonatomic) NSString subQueueType;
- (id)initWithEntity:insertIntoManagedObjectContext:;
@end
