@interface AWEOrdersManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)handleOrderToastMessageDict:;
+ (id)orderListSchema;
+ (BOOL)shouldShowBadgeInProfileCard;
+ (void)badgeRead;
+ (void)xTabBadgeRead;
+ (void)fetchOrderCounterWithUserId:appId:pageFrom:;
+ (void)fetchOrderCounterWithUserId:appId:pageFrom:completion:;
+ (id)orderPrompt;
+ (id)promptKey;
+ (id)commonMutexLock;
+ (id)orderPrompt:;
+ (id)previousPrompt;
+ (id)lastUpdateTimeKey;
+ (id)badgeShowCountKey;
+ (id)tabBadgeShowCountKey;
+ (void)badgeShowed;
+ (void)notifyBadgePromptMessage;
+ (void)tabBadgeShowed;
+ (long long)updateTime;
+ (id)toast;
@end
