@interface AWEStudioSpecialPlusManager : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEStudioGlobalConfig;
- (id)initPrivate;
+ (Class)aAWEStudioGlobalConfigClass;
+ (void)setIsShowingSpecialPlusIcon:;
+ (BOOL)isShowingSpecialPlusIcon;
+ (void)setHasShowedSpecialPlusButtonBubble:;
+ (BOOL)hasShowedSpecialPlusButtonBubble;
+ (BOOL)hasClickedSpecialPlusButton;
+ (void)setHasClickedSpecialPlusButton:;
+ (BOOL)shouldShowStudioSpecialPlusIconWithAwemeModel:;
+ (BOOL)isInStudioSpecialPlusActivityTime;
+ (void)cleanCachedModelResources;
+ (BOOL)forbidApplyUserRemainStrategy;
+ (BOOL)shouldShowUserRemainHotPropIconPlus;
+ (BOOL)shouldAutoStartRecognitionForUserRemainStrategy;
+ (BOOL)shouldContinueCheckShowSpecialPlusButton;
+ (BOOL)isShowingSpecialPlusIconWithVersionCompare;
+ (id)sharedManager;
@end
