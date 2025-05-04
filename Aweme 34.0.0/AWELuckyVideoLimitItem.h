@interface AWELuckyVideoLimitItem : MTLModel
@property (nonatomic) NSString currentScene;
@property (nonatomic) Q videoLimitTime;
@property (nonatomic) NSString videoLimitTip;
@property (nonatomic) NSArray fromSceneArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCurrentScene:;
- (unsigned long long)videoLimitTime;
- (void)setVideoLimitTime:;
- (id)videoLimitTip;
- (void)setVideoLimitTip:;
- (id)fromSceneArray;
- (void)setFromSceneArray:;
- (void).cxx_destruct;
- (id)currentScene;
+ (id)JSONKeyPathsByPropertyKey;
@end
