@interface EKEventFetchRequestToken : NSObject
@property (nonatomic) EKEventStore eventStore;
@property (nonatomic) I token;
- (void)cancel;
- (unsigned int)token;
- (id)eventStore;
- (id)initWithEventStore:token:;
- (void).cxx_destruct;
@end
