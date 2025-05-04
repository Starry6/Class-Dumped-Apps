@interface AWELiteRedPacketGuideApiModel : AWELiteRedPacketBaseApiModel
@property (nonatomic) AWELiteRedPacketGuideInfo guide;
- (void).cxx_destruct;
- (id)guide;
- (void)setGuide:;
+ (id)guideJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
