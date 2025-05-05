@interface MADVIUserFeedbackRequest : MADRequest
@property (nonatomic) NSData payload;
@property (nonatomic) NSString reportIdentifier;
- (id)payload;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)reportIdentifier;
- (id)initWithPayload:andReportIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
