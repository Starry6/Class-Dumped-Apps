@interface IESLiveintimateChatLayoutMachineLink : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} containerFrame;
@property (nonatomic) {CGSize=dd} sessionSize;
@property (nonatomic) double sessionPortraitSpace;
@property (nonatomic) BOOL isPCMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSessionSize:;
- (void)didSetAttachingDIContext;
- (BOOL)isPCMode;
- (double)sessionPortraitSpace;
- (id)sessionSize;
- (void)setIsPCMode:;
- (void)setSessionPortraitSpace:;
- (id)containerFrame;
- (void)setContainerFrame:;
@end
