@interface PPEventQuery : NSObject
@property (nonatomic) NSDate fromDate;
@property (nonatomic) NSDate toDate;
- (void)setFromDate:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setToDate:;
- (id)fromDate;
- (id)description;
- (id)toDate;
+ (BOOL)supportsSecureCoding;
@end
