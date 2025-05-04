@interface AWELVideoSideBarGuideModel : MTLModel
@property (nonatomic) BOOL needGuide;
@property (nonatomic) AWEURLModel guideCoverImage;
@property (nonatomic) AWELVideoSideBarGuideCoverText guideCoverText;
@property (nonatomic) q showStartTime;
@property (nonatomic) q showIntervalDuration;
@property (nonatomic) q maxShowNum;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)showStartTime;
- (void)setShowStartTime:;
- (BOOL)needGuide;
- (void)setNeedGuide:;
- (id)guideCoverImage;
- (void)setGuideCoverImage:;
- (id)guideCoverText;
- (void)setGuideCoverText:;
- (long long)showIntervalDuration;
- (void)setShowIntervalDuration:;
- (long long)maxShowNum;
- (void)setMaxShowNum:;
- (void).cxx_destruct;
+ (id)guideCoverImageJSONTransformer;
+ (id)guideCoverTextJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
