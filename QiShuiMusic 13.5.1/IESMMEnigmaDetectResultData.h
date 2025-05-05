@interface IESMMEnigmaDetectResultData : IESMMAlgorithmResultData
@property (nonatomic) q type;
@property (nonatomic) NSString text;
@property (nonatomic) NSArray points;
@property (nonatomic) double zoomSuggest;
- (void)setZoomSuggest:;
- (double)zoomSuggest;
- (id)init;
- (void)setText:;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
- (id)points;
- (id)text;
- (void)setPoints:;
@end
