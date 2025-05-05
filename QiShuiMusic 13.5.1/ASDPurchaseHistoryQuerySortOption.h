@interface ASDPurchaseHistoryQuerySortOption : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) BOOL ascending;
- (BOOL)ascending;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)name;
- (id)initWithName:ascending:;
+ (BOOL)supportsSecureCoding;
@end
