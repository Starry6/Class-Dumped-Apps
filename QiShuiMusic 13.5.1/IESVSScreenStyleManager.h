@interface IESVSScreenStyleManager : NSObject
@property (nonatomic) Q screenStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setScreenStyle:;
- (unsigned long long)closeBtnDidClick;
- (unsigned long long)currentScreenStyleType;
- (unsigned long long)fullScreenBtnDidClick;
- (id)fullScreenMode;
- (void)resetScreenStyleType;
- (unsigned long long)screenStyle;
- (void)updateToFullScreen:;
- (unsigned long long)updateToFullScreenOrientation:;
- (unsigned long long)updateToHalfScreenOrientation:;
- (unsigned long long)updateToOrientation:;
- (unsigned long long)updateToScreenStyle:;
- (BOOL)usePadNewStyle;
- (BOOL)isFullScreen;
+ (id)shareManager;
@end
