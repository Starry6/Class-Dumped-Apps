@interface BDSmartSpeedTest : NSObject
@property (nonatomic) NSString intelligentModelURL;
@property (nonatomic) BOOL isServiceValid;
- (void)configServer:;
- (id)getIntelligentInput:;
- (id)intelligentModelURL;
- (BOOL)isServiceValid;
- (float)parseIntelligentInputFloat:withKey:withOptimizedFlag:;
- (id)parseIntelligentInputString:withKey:withOptimizedFlag:;
- (float)predictSpeedSync:;
- (void)setIntelligentModelURL:;
- (void)setIsServiceValid:;
- (void).cxx_destruct;
@end
