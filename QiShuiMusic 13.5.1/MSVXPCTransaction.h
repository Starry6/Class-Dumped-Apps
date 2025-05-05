@interface MSVXPCTransaction : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) BOOL active;
- (void)beginTransaction;
- (void)endTransactionOnDate:;
- (void)endTransaction;
- (id)initWithName:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isActive;
+ (id)activeTransactions;
@end
