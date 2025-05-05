@interface CNContactStoreFetchExecutor : NSObject
@property (nonatomic) CNContactStore store;
@property (nonatomic) CNResult result;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)result;
- (id)init;
- (id)countForFetchRequest:;
- (id)executeFetchRequest:;
- (void).cxx_destruct;
- (void)visitContactFetchRequest:;
- (id)store;
- (void)visitChangeHistoryFetchRequest:;
- (id)initWithContactStore:;
- (void)setResult:;
@end
