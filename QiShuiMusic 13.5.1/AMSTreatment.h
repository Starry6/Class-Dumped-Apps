@interface AMSTreatment : NSObject
@property (nonatomic) NSDate endDate;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSDate startDate;
- (id)startDate;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)endDate;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithEndDate:identifier:startDate:;
+ (BOOL)supportsSecureCoding;
@end
