@interface CSJSplashLogUtil : NSObject
@property (nonatomic) NSMutableDictionary tagDic;
- (void)beginWithTag:logStr:;
- (void)endWithTag:logStr:;
- (void)setTagDic:;
- (id)tagDic;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
