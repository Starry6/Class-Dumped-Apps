@interface AntScanUtilZZZX : NSObject
@property (nonatomic) NSMutableArray outputInfos;
@property (nonatomic) NSMutableArray inputRules;
- (void)saveOutputInfo:;
- (void)setOutputInfos:;
- (void)freeInputRule:withSize:;
- (void)freeLibNames:withSize:;
- (void)freeOutputInfo:withSize:;
- (void)generateOutputInfos:withSize:;
- (void)initInputRule:withType:andString:;
- (void)initInputRules:withArray:;
- (void)initOutputInfo:withSize:;
- (id)inputRules;
- (BOOL)modifyDict:;
- (id)outputInfos;
- (void)setInputRules:;
- (BOOL)startScan:;
- (id)valueStr:;
- (id)init;
- (void).cxx_destruct;
+ (id)getOutputInfo;
@end
