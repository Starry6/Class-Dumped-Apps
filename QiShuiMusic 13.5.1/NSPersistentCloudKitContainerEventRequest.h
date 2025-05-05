@interface NSPersistentCloudKitContainerEventRequest : NSPersistentStoreRequest
@property (nonatomic) q resultType;
- (unsigned long long)requestType;
- (void)dealloc;
- (void)setResultType:;
- (long long)resultType;
- (id)initWithCKEventFetchRequest:;
+ (id)fetchEventsAfterDate:;
+ (id)fetchEventsAfterEvent:;
+ (id)fetchEventsMatchingFetchRequest:;
+ (id)fetchRequestForEvents;
@end
