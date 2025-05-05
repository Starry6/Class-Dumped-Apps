@interface IESLiveintimateChatLayoutMachineWatchLandscape : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} containerFrame;
@property (nonatomic) {CGSize=dd} sessionSize;
@property (nonatomic) double sessionPortraitSpace;
@property (nonatomic) UIView optionViewContainer;
@property (nonatomic) BOOL isPCMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSessionSize:;
- (void)didSetAttachingDIContext;
- (BOOL)enableLandscapeMarginOptimize;
- (BOOL)isPCMode;
- (id)optionViewContainer;
- (double)sessionPortraitSpace;
- (id)sessionSize;
- (void)setIsPCMode:;
- (void)setOptionViewContainer:;
- (void)setSessionPortraitSpace:;
- (void)setup;
- (void).cxx_destruct;
- (id)containerFrame;
- (void)setContainerFrame:;
@end
