@interface IESIMInnerPushCoordinator : NSObject
@property (nonatomic) q forbidLevel;
@property (nonatomic) <IESIMInnerPushProtocol> currentInnerPush;
- (void)setForbidLevel:;
- (void)arrangeDismissInnerPush:context:;
- (BOOL)arrangeShowInnerPush:context:;
- (id)currentInnerPush;
- (void)forbidInnerPushWithLevel:;
- (long long)forbidLevel;
- (void)resetForbid;
- (void)setCurrentInnerPush:;
- (void).cxx_destruct;
+ (id)backgroundColorForWhiteStyle:;
+ (id)borderColorForWhiteStyle:;
+ (id)contentColorForWhiteStyle:;
+ (id)contentVoipColorForWhiteStyle:;
+ (id)titleColorForWhiteStyle:;
+ (id)sharedInstance;
@end
