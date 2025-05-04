@interface AWEPOICOIItemFeedbackModel : MTLModel
@property (nonatomic) q feebackType;
@property (nonatomic) NSString feedbackText;
@property (nonatomic) NSString feedbackInfo;
@property (nonatomic) NSString url;
@property (nonatomic) NSString feedbackTypeStringForTracking;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)feedbackInfo;
- (void)setFeedbackInfo:;
- (long long)feebackType;
- (void)setFeebackType:;
- (id)feedbackText;
- (void)setFeedbackText:;
- (id)feedbackTypeStringForTracking;
- (void)setFeedbackTypeStringForTracking:;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)url;
+ (id)spuListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
