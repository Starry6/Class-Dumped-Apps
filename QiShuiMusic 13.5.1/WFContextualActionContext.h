@interface WFContextualActionContext : NSObject
@property (nonatomic) NSArray historicalActionIdentifiers;
@property (nonatomic) Q surface;
@property (nonatomic) NSArray files;
@property (nonatomic) BOOL allowsExpensiveFetch;
- (unsigned long long)surface;
- (id)initWithSurface:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setSurface:;
- (id)files;
- (void)setFiles:;
- (BOOL)allowsExpensiveFetch;
- (void)setAllowsExpensiveFetch:;
- (id)historicalActionIdentifiers;
- (void)setHistoricalActionIdentifiers:;
+ (BOOL)supportsSecureCoding;
@end
