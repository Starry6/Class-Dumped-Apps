@interface AWELandscapePlaybackSettingConfig : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)getPlaybackSettingInfo;
+ (BOOL)canBlockReminderTipsWithModel:;
+ (BOOL)playbackSettingEnabledWithModel:;
+ (BOOL)landscapeFeedCanScrollWhenFromHomePage;
@end
