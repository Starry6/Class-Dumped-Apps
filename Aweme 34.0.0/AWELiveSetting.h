@interface AWELiveSetting : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasCreatedLiveRoom;
- (BOOL)isLiveGuideShowing;
- (BOOL)clickShootToLive;
- (void)setClickShootToLive:;
- (void)setHasCreatedLiveRoom:;
- (void)setIsLiveGuideShowing:;
- (void)setHadShowLiveBubbleGuide;
- (BOOL)enableLiveBubbleGuideSettings;
- (id)liveGuideBubbleImageURL;
+ (id)sharedLiveSetting;
@end
