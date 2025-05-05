@interface IESIMChallengeNakedEye3DModel : MTLModel
@property (nonatomic) IESIMURLModel backgroundVideo;
@property (nonatomic) IESIMURLModel backgroundCoverImage;
@property (nonatomic) IESIMURLModel foregroundAnim;
@property (nonatomic) NSString webURL;
@property (nonatomic) NSString openURL;
@property (nonatomic) q gestureType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)backgroundCoverImage;
- (id)foregroundAnim;
- (void)setBackgroundCoverImage:;
- (void)setBackgroundVideo:;
- (void)setForegroundAnim:;
- (void)setOpenURL:;
- (void).cxx_destruct;
- (id)webURL;
- (void)setWebURL:;
- (long long)gestureType;
- (void)setGestureType:;
- (id)openURL;
- (id)backgroundVideo;
+ (id)backgroundCoverImageJSONTransformer;
+ (id)backgroundVideoJSONTransformer;
+ (id)foregroundAnimJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
