@interface MBCellularAccess : NSObject
@property (nonatomic) BOOL allowsExpensiveNetworkAccess;
@property (nonatomic) BOOL allowsConstrainedNetworkAccess;
- (BOOL)allowsExpensiveNetworkAccess;
- (void)setAllowsExpensiveNetworkAccess:;
- (id)init;
- (id)initWithCoder:;
- (id)initWithDictionaryRepresentation:;
- (void)encodeWithCoder:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)allowsConstrainedNetworkAccess;
- (void)setAllowsConstrainedNetworkAccess:;
+ (BOOL)supportsSecureCoding;
+ (id)inexpensiveCellularAccess;
+ (id)expensiveCellularAccess;
@end
