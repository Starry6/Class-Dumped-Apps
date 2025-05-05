@interface IESLivePKAutoMatchBuildConfig : NSObject
@property (nonatomic) q matchType;
@property (nonatomic) q source;
@property (nonatomic) NSString sourceStr;
@property (nonatomic) NSString activityType;
@property (nonatomic) BOOL isHighWay;
@property (nonatomic) BOOL ignoreAnnouncementIntercept;
@property (nonatomic) NSDictionary panelTrackParams;
@property (nonatomic) NSString gameId;
- (void)setIgnoreAnnouncementIntercept:;
- (id)gameId;
- (BOOL)ignoreAnnouncementIntercept;
- (BOOL)isHighWay;
- (id)panelTrackParams;
- (void)setGameId:;
- (void)setIsHighWay:;
- (void)setPanelTrackParams:;
- (void)setSourceStr:;
- (id)sourceStr;
- (id)activityType;
- (void)setActivityType:;
- (id)init;
- (void).cxx_destruct;
- (long long)source;
- (void)setSource:;
- (long long)matchType;
- (void)setMatchType:;
@end
