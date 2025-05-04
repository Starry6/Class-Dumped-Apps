@interface AWEProfileMultiIPBaseComponent : AWEProfileBaseComponent
@property (nonatomic) BOOL linkAreaIPShow;
@property (nonatomic) q linkAreaCount;
@property (nonatomic) BOOL personalTagIPShow;
@property (nonatomic) q personalTagCount;
@property (nonatomic) BOOL hasTrackedMultiIPShow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)checkIPLabelCanShowWithArea:;
- (void)reportIPLabelShow:area:count:;
- (void)setLinkAreaIPShow:;
- (BOOL)linkAreaIPShow;
- (void)setLinkAreaCount:;
- (void)setPersonalTagIPShow:;
- (void)setPersonalTagCount:;
- (BOOL)personalTagIPShow;
- (BOOL)hasTrackedMultiIPShow;
- (long long)linkAreaCount;
- (long long)personalTagCount;
- (void)setHasTrackedMultiIPShow:;
- (void)onInit;
@end
