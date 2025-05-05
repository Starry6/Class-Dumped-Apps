@interface CRTextRecognizerTopKModelEspressoOutput : NSObject
@property (nonatomic) {?=^v^v[4Q][4Q]QQQQQQQQQQi} output_label_prob_map;
@property (nonatomic) {?=^v^v[4Q][4Q]QQQQQQQQQQi} output_topk_indices;
@property (nonatomic) NSArray textFeatureInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void).cxx_destruct;
- (id)textFeatureInfo;
- (void)setTextFeatureInfo:;
- (id)output_label_prob_map;
- (void)setOutput_label_prob_map:;
- (id)initWithOutputLabelProbs:outputTopKIndices:featureInfo:;
- (id)output_topk_indices;
- (void)setOutput_topk_indices:;
@end
