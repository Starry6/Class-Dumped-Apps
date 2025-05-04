@interface AWELuckySDKAdapterCommonAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)weakTarget;
+ (void)registerBridge;
+ (BOOL)isSpecialMode;
+ (id)addtionalURLSchems;
+ (BOOL)useTimerTaskAdapter;
+ (BOOL)useMotionAdapter;
+ (BOOL)useTabAdapter;
+ (id)tabTaskSchema;
+ (void)luckyCatPlayVideoParams:completionWithErrorInfo:;
+ (void)luckyCatAliAuth:completionBlock:;
+ (Class)weakTargetClass;
+ (void)setFeedCommentShowing:;
+ (BOOL)canShowPopup;
+ (void)startLuckyDogTimerTaskPendantAdapter;
+ (id)userID;
+ (id)appStoreUrl;
@end
