@interface AWEIMContextServiceImpls : NSObject
@property (nonatomic) BOOL isFromNewJourney;
@property (nonatomic) NSString tipLabelKey;
@property (nonatomic) q enterFrom;
@property (nonatomic) double cameraEnterTime;
@property (nonatomic) NSArray selectedFriends;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showText:;
- (BOOL)isColdLaunch;
- (void)setEnterFrom:;
- (long long)enterFrom;
- (void)showAlertWithTitle:message:preferredStyle:cancelButtonTitle:destructiveButtonTitle:otherButtonTitles:tapBlock:;
- (void)initEffect;
- (void)setCameraEnterTime:;
- (void)showPopoverWithTarget:TargetPoint:onView:withCover:;
- (BOOL)isCloseFriendsType;
- (BOOL)isFromNewJourney;
- (id)tipLabelKey;
- (double)cameraEnterTime;
- (id)selectedFriends;
- (void)setSelectedFriends:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
