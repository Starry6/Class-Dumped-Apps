@interface BDUGLuckyTracker : NSObject
@property (nonatomic) NSMutableArray paramsBlock;
@property (nonatomic) NSDictionary samplingSettings;
- (void)setParamsBlock:;
- (void)addCommonParamsBlock:;
- (id)paramsBlock;
- (id)samplingSettings;
- (void)setSamplingSettings:;
- (void)updateSamplingSettings:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (BOOL)__shouldUploadEvent:;
+ (void)event:params:;
+ (void)event:params:needLuckyTeaKey:;
+ (id)sharedInstance;
@end
