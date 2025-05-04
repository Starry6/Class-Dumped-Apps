@interface AWENearbyFeedCardManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isEqualNearbyCardTypeBetweenAwemeModel:withAnotherModel:;
- (id)createFeedNearbyCardViewControllerWithAwemeModel:;
- (void)handleNearbyCardListWithPullType:response:;
- (id)__subManagerWithCardType:;
- (id)transformAwemeModelFromCardModel:;
- (id)transformDCardModelFromCardModel:bindAweme:isNativeScene:;
- (void)trackRejectCardEventWithCode:reason:withExtraDict:;
- (void)handleLeaveNearbyWithCardUnexposedReason:videoIndex:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (id)subManagers;
- (id)requestParams;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
