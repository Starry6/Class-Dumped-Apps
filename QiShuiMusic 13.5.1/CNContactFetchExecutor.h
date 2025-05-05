@interface CNContactFetchExecutor : NSObject
@property (nonatomic) CNContactFetchRequest request;
@property (nonatomic) CNContactStore store;
- (id)run:;
- (id)initWithRequest:store:;
- (id)request;
- (void).cxx_destruct;
- (id)description;
- (id)store;
+ (id)os_log;
@end
