@interface AWELVideoAdInfoModel : MTLModel
@property (nonatomic) AWELVideoAdSceneModel adBefore;
@property (nonatomic) AWELVideoAdSceneModel adMid;
@property (nonatomic) AWELVideoAdSceneModel adAfter;
@property (nonatomic) AWELVideoAdSceneModel adUnderVideo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)adBefore;
- (void)setAdBefore:;
- (id)adMid;
- (void)setAdMid:;
- (id)adAfter;
- (void)setAdAfter:;
- (id)adUnderVideo;
- (void)setAdUnderVideo:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
