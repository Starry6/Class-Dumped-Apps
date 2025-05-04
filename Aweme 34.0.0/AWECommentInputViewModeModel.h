@interface AWECommentInputViewModeModel : NSObject
@property (nonatomic) Q colorMode;
@property (nonatomic) Q sceneMode;
@property (nonatomic) BOOL isHorizontalScreen;
@property (nonatomic) BOOL adjustLayerPosition;
@property (nonatomic) NSString emptyContentTips;
- (id)emptyContentTips;
- (void)setEmptyContentTips:;
- (void)setSceneMode:;
- (BOOL)adjustLayerPosition;
- (BOOL)isHorizontalScreen;
- (void)setIsHorizontalScreen:;
- (void)setAdjustLayerPosition:;
- (unsigned long long)colorMode;
- (void)setColorMode:;
- (void).cxx_destruct;
- (unsigned long long)sceneMode;
@end
