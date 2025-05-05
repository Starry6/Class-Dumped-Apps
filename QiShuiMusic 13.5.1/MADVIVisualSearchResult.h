@interface MADVIVisualSearchResult : MADResult
@property (nonatomic) NSArray resultItems;
@property (nonatomic) NSData userFeedbackPayload;
- (id)initWithCoder:;
- (id)resultItems;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)userFeedbackPayload;
- (id)initWithResultItems:andUserFeedbackPayload:;
+ (BOOL)supportsSecureCoding;
@end
