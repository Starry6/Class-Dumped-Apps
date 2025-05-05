@interface CADNotification : NSObject
@property (nonatomic) NSMutableArray mutableExpandedNotifications;
@property (nonatomic) NSInteger type;
@property (nonatomic) CADObjectID objectID;
@property (nonatomic) double occurrenceDate;
@property (nonatomic) double expirationDate;
@property (nonatomic) BOOL expanded;
@property (nonatomic) NSArray expandedNotifications;
- (id)objectID;
- (double)expirationDate;
- (int)type;
- (void).cxx_destruct;
- (double)occurrenceDate;
- (BOOL)expanded;
- (id)initWithType:objectID:occurrenceDate:expirationDate:;
- (id)expandedNotifications;
- (void)addExpandedNotification:;
- (id)mutableExpandedNotifications;
- (void)setMutableExpandedNotifications:;
@end
