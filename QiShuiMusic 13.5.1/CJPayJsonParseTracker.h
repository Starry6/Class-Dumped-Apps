@interface CJPayJsonParseTracker : NSObject
@property (nonatomic) NSMutableDictionary classParseNumDic;
@property (nonatomic) NSMutableDictionary classParseTimeDic;
@property (nonatomic) NSMutableDictionary classSizeDic;
- (id)classParseNumDic;
- (id)classParseTimeDic;
- (id)classSizeDic;
- (void)p_calculateSizeOfDic:completion:;
- (void)recordParseProcessWithClassName:costTime:modelDic:;
- (void)setClassParseNumDic:;
- (void)setClassParseTimeDic:;
- (void)setClassSizeDic:;
- (void)syncModelParseTime;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
