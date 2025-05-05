@interface PPBaseFeedback : NSObject
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) NSArray feedbackItems;
@property (nonatomic) NSString clientBundleId;
@property (nonatomic) NSString mappingId;
@property (nonatomic) NSDate timestamp;
@property (nonatomic) BOOL isMapped;
- (id)clientBundleId;
- (id)init;
- (id)feedbackItems;
- (id)initWithFeedbackItems:timestamp:clientIdentifier:clientBundleId:mappingId:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isMapped;
- (id)mappingId;
- (void).cxx_destruct;
- (void)setClientIdentifier:;
- (id)timestamp;
- (id)description;
- (id)clientIdentifier;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithFeedbackItems:mappingId:;
- (BOOL)isEqualToPPBaseFeedback:;
+ (BOOL)supportsSecureCoding;
@end
