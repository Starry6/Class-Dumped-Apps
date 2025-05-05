@interface EKSharedEventStoreProvider : NSObject
@property (nonatomic) EKEventStore sharedEventStore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithEventStore:;
- (id)eventStore;
- (id)sharedEventStore;
- (void).cxx_destruct;
@end
