@interface AWENaviNodeComposer : NSObject
@property (nonatomic) NSString body;
@property (nonatomic) NSArray hashtags;
@property (nonatomic) NSArray mentions;
@property (nonatomic) AWENaviAnchorNode anchor;
@property (nonatomic) AWENaviMissionNode mission;
@property (nonatomic) AWENaviActivityNode activity;
- (void)setMission:;
- (id)mission;
- (id)setupAnchor:;
- (id)setupActivity:;
- (id)setupMission:;
- (id)anchor;
- (void)setAnchor:;
- (id)body;
- (id)activity;
- (void).cxx_destruct;
- (id)hashtags;
- (void)setActivity:;
- (void)setBody:;
- (void)setHashtags:;
- (id)mentions;
- (void)setMentions:;
@end
