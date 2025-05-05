@interface AXMMLElementGroup : NSObject
@property (nonatomic) AXMVisionFeature feature;
@property (nonatomic) NSMutableArray subfeatures;
@property (nonatomic) BOOL topLevel;
@property (nonatomic) BOOL includeChildren;
@property (nonatomic) double confidence;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
- (double)confidence;
- (void)setFeature:;
- (id)feature;
- (id)textLabel;
- (BOOL)includeChildren;
- (id)init;
- (void)setConfidence:;
- (void)setFrame:;
- (id)subfeatures;
- (id)frame;
- (void)setIncludeChildren:;
- (void).cxx_destruct;
- (id)description;
- (id)featureLabel;
- (id)childFeatures;
- (void)setSubfeatures:;
- (BOOL)topLevel;
- (void)setTopLevel:;
@end
