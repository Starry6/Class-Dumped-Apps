@interface AWEIMMessageListTopFloatingConfig : NSObject
@property (nonatomic) AWEIMMessageListLayoutConfig layoutConfig;
@property (nonatomic) BOOL isFloatMode;
@property (nonatomic) BOOL disableBlurView;
@property (nonatomic) BOOL showBottomSeparator;
@property (nonatomic) BOOL disableClipsToBounds;
- (BOOL)disableBlurView;
- (void)setDisableBlurView:;
- (void)setIsFloatMode:;
- (BOOL)isFloatMode;
- (void)setLayoutConfig:;
- (void)setShowBottomSeparator:;
- (void)setDisableClipsToBounds:;
- (BOOL)disableClipsToBounds;
- (BOOL)showBottomSeparator;
- (id)init;
- (void).cxx_destruct;
- (id)layoutConfig;
@end
