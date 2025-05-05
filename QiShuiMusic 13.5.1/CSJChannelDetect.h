@interface CSJChannelDetect : NSObject
@property (nonatomic) NSDictionary collectRitDic;
- (BOOL)alreadyCollect:;
- (BOOL)canCollect;
- (void)collectInfo:caller:slot:;
- (id)collectRitDic;
- (id)getClassName:;
- (id)getIvarList:;
- (id)getProtocolList:;
- (void)reportInfo:slot:;
- (void)setCollectRitDic:;
- (BOOL)isValid:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
