@interface AWECommentEvaluationEventDataContainer : NSObject
@property (nonatomic) AWECommentEvaluationSendElementEventDataContainer sendElementEventData;
@property (nonatomic) AWECommentEvaluationTitleElementEventDataContainer titleElementEventData;
@property (nonatomic) AWECommentEvaluationRatingElementEventDataContainer ratingElementEventData;
@property (nonatomic) AWECommentEvaluationContentElementEventDataContainer contentElementEventData;
@property (nonatomic) AWECommentEvaluationPreViewElementEventDataContainer previewElementEventData;
@property (nonatomic) AWECommentEvaluationPageEventDataContainer pageEventData;
@property (nonatomic) AWECommentEvaluationExpansionEventDataContainer expansionEventData;
- (id)contentElementEventData;
- (id)expansionEventData;
- (id)previewElementEventData;
- (id)ratingElementEventData;
- (id)titleElementEventData;
- (id)sendElementEventData;
- (id)pageEventData;
- (void)setSendElementEventData:;
- (void)setTitleElementEventData:;
- (void)setRatingElementEventData:;
- (void)setContentElementEventData:;
- (void)setPreviewElementEventData:;
- (void)setPageEventData:;
- (void)setExpansionEventData:;
- (void).cxx_destruct;
@end
