@interface AWENaviDuetMissionConfig : NSObject
@property (nonatomic) NSString missionInfoJson;
@property (nonatomic) NSString toastWhenSwitchingDefault;
@property (nonatomic) NSArray hashtags;
@property (nonatomic) NSArray mentions;
@property (nonatomic) NSArray exclusiveGroups;
- (id)toastWhenSwitchingDefault;
- (id)exclusiveGroups;
- (void)setToastWhenSwitchingDefault:;
- (void)setMissionInfoJson:;
- (void)setExclusiveGroups:;
- (id)missionInfoJson;
- (void).cxx_destruct;
- (id)hashtags;
- (void)setHashtags:;
- (id)mentions;
- (void)setMentions:;
@end
