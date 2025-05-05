@interface IESLiveintimateChatLayoutMachineWatch : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} containerFrame;
@property (nonatomic) {CGSize=dd} sessionSize;
@property (nonatomic) double sessionPortraitSpace;
@property (nonatomic) BOOL appDataCalculateed;
@property (nonatomic) BOOL isPCMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSessionSize:;
- (BOOL)appDataCalculateed;
- (BOOL)isPCMode;
- (double)sessionPortraitSpace;
- (id)sessionSize;
- (void)setAppDataCalculateed:;
- (void)setIsPCMode:;
- (void)setSessionPortraitSpace:;
- (void)setupWithStreamAppData:;
- (id)containerFrame;
- (void)setContainerFrame:;
@end
