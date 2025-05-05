@interface EMFollowUp : NSObject
@property (nonatomic) EFPair pair;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) NSString jsonStringForModelEvaluationForSuggestions;
@property (nonatomic) BOOL isActive;
- (id)startDate;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)endDate;
- (id)pair;
- (void).cxx_destruct;
- (id)description;
- (BOOL)containsDate:;
- (BOOL)isEqual:;
- (BOOL)isActive;
- (id)copyWithZone:;
- (id)initWithStartDate:endDate:jsonStringForModelEvaluationForSuggestions:;
- (id)jsonStringForModelEvaluationForSuggestions;
+ (BOOL)supportsSecureCoding;
@end
