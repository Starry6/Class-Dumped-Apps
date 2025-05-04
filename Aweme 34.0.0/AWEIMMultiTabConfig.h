@interface AWEIMMultiTabConfig : NSObject
@property (nonatomic) NSNumber currentUserFollowerCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (id)currentUserFollowerCount;
- (void)setCurrentUserFollowerCount:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (BOOL)enableMute;
+ (BOOL)enableHighFansCategoryList;
+ (id)titleForKey:defaultName:;
+ (BOOL)canShowListWithLastStatus:;
+ (BOOL)isHighFansAccount;
+ (void)storeListLastStatus:forType:;
+ (id)p_keyForShowLastStatus:;
+ (id)shared;
@end
