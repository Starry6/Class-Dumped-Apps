@interface CNChangeHistoryResultEventConverter : NSObject
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) NSArray additionalContactKeyDescriptors;
@property (nonatomic) CNChangeHistoryEventFactory factory;
- (id)factory;
- (id)eventsFromResult:;
- (id)additionalContactKeyDescriptors;
- (id)initWithContactStore:additionalContactKeyDescriptors:;
- (void).cxx_destruct;
- (id)contactStore;
@end
