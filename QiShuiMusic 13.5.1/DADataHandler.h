@interface DADataHandler : NSObject
@property (nonatomic) NSString changeTrackingID;
@property (nonatomic) ^v container;
- (void)setContainer:;
- (void)dealloc;
- (id)container;
- (id)changeTrackingID;
- (long long)dataclass;
- (void).cxx_destruct;
- (void)openDB;
- (id)initWithContainer:changeTrackingID:;
- (int)getIdFromLocalObject:;
- (id)copyLocalObjectFromId:;
- (BOOL)saveContainer;
- (id)copyOfAllLocalObjectsInContainer;
- (void)drainContainer;
- (BOOL)wipeServerIds;
- (void)drainSuperfluousChanges;
- (BOOL)closeDBAndSave:;
- (id)getDAObjectWithLocalItem:serverId:account:;
- (id)getDAExceptionObjectWithLocalItem:originalEvent:account:;
- (void)setChangeTrackingID:;
+ (id)newDataHandlerForDataclass:container:changeTrackingID:;
@end
