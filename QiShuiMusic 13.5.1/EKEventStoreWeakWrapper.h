@interface EKEventStoreWeakWrapper : NSObject
@property (nonatomic) EKEventStore weakEventStore;
@property (nonatomic) ^v unsafeRawPointer;
- (id)initWithEventStore:;
- (void).cxx_destruct;
- (id)weakEventStore;
- (id)unsafeRawPointer;
@end
