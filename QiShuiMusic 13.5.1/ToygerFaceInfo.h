@interface ToygerFaceInfo : ToygerBaseModel
@property (nonatomic) ToygerRect rect;
@property (nonatomic) NSArray points;
@property (nonatomic) NSString confidence;
@property (nonatomic) NSString quality;
@property (nonatomic) NSString feature;
@property (nonatomic) NSString feaVersion;
- (id)feaVersion;
- (void)setFeaVersion:;
- (id)confidence;
- (void)setFeature:;
- (id)feature;
- (id)quality;
- (id)rect;
- (id)init;
- (void)setConfidence:;
- (void)setQuality:;
- (void)setRect:;
- (void).cxx_destruct;
- (id)points;
- (void)setPoints:;
@end
