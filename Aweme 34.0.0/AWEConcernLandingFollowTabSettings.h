@interface AWEConcernLandingFollowTabSettings : AWEBaseApiModel
@property (nonatomic) BOOL landingControlByServer;
@property (nonatomic) BOOL landingControlByClientYellowDotCount;
- (BOOL)landingControlByServer;
- (void)setLandingControlByServer:;
- (BOOL)landingControlByClientYellowDotCount;
- (void)setLandingControlByClientYellowDotCount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
