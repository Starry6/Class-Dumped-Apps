@interface AWEInnerPushCoordinator : NSObject
@property (nonatomic) q forbidLevel;
@property (nonatomic) <AWEInnerPushProtocol> currentInnerPush;
- (id)currentInnerPush;
- (void)arrangeDismissInnerPush:context:;
- (BOOL)arrangeShowInnerPush:context:;
- (void)forbidInnerPushWithLevel:;
- (void)resetForbid;
- (long long)forbidLevel;
- (void)setCurrentInnerPush:;
- (void)setForbidLevel:;
- (void).cxx_destruct;
+ (id)backgroundColorForWhiteStyle:;
+ (id)titleColorForWhiteStyle:;
+ (id)contentColorForWhiteStyle:;
+ (id)borderColorForWhiteStyle:;
+ (id)contentVoipColorForWhiteStyle:;
+ (id)sharedInstance;
@end
