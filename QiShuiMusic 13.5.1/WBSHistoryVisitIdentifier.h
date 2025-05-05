@interface WBSHistoryVisitIdentifier : NSObject
@property (nonatomic) NSString urlString;
@property (nonatomic) double visitTime;
@property (nonatomic) WBSHistoryItem associatedHistoryItem;
@property (nonatomic) WBSHistoryVisit associatedHistoryVisit;
- (id)urlString;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (double)visitTime;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithURLString:visitTime:;
- (id)associatedHistoryItem;
- (void)setAssociatedHistoryItem:;
- (id)associatedHistoryVisit;
- (void)setAssociatedHistoryVisit:;
+ (BOOL)supportsSecureCoding;
@end
