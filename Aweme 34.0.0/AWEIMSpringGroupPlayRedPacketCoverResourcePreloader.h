@interface AWEIMSpringGroupPlayRedPacketCoverResourcePreloader : HTSService
@property (nonatomic) BOOL hasPreloadedCoverResources;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (void)awemeSettingDidChange;
- (void)setHasPreloadedCoverResources:;
- (BOOL)hasPreloadedCoverResources;
- (void)dealloc;
@end
