@interface UgenLogUtil : NSObject
@property (nonatomic) NSMutableDictionary tagDic;
- (void)logWithType:format:;
- (void)setTagDic:;
- (id)tagDic;
- (void)ugen_beginWithTag:logStr:;
- (void)ugen_endWithTag:logStr:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
