@interface AWESECAppJumpDialogBluePrint : NSObject
@property (nonatomic) NSString heading;
@property (nonatomic) NSString body;
@property (nonatomic) AWESECAppJumpDialogActionBluePrint leftAction;
@property (nonatomic) AWESECAppJumpDialogActionBluePrint rightAction;
@property (nonatomic) BOOL forbidDismissByClickMask;
@property (nonatomic) BOOL isShowOpenFailedToast;
- (void)setForbidDismissByClickMask:;
- (void)setLeftAction:;
- (id)leftAction;
- (BOOL)forbidDismissByClickMask;
- (id)aAWESECAppJumpDialogConfig;
- (BOOL)isShowOpenFailedToast;
- (void)setIsShowOpenFailedToast:;
- (id)heading;
- (void)setHeading:;
- (id)actions;
- (id)body;
- (void).cxx_destruct;
- (void)setBody:;
- (void)setRightAction:;
- (id)rightAction;
+ (Class)aAWESECAppJumpDialogConfigClass;
+ (id)defaultBluePrint;
+ (id)searchDefaultBluePrint;
@end
