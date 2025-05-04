@interface AWEIMMessageListConfig : NSObject
@property (nonatomic) BOOL isFloatMode;
@property (nonatomic) UIViewController floatContainerVC;
@property (nonatomic) BOOL fromFloatWindow;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) BOOL floatModeNewStyle;
@property (nonatomic) NSString enterMethod;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)enterFrom;
- (void)setIsFloatMode:;
- (BOOL)isFloatMode;
- (id)floatContainerVC;
- (BOOL)floatModeNewStyle;
- (void)setFloatContainerVC:;
- (void)setFromFloatWindow:;
- (BOOL)fromFloatWindow;
- (void)setFloatModeNewStyle:;
- (void).cxx_destruct;
@end
