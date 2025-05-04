@interface AWECodeGenCommentUserGuideModel : AWEBaseDataModel
@property (nonatomic) NSString biz;
@property (nonatomic) NSDictionary tipGuide;
@property (nonatomic) NSDictionary windowGuide;
@property (nonatomic) NSInteger freqDay;
@property (nonatomic) NSInteger freqNum;
- (id)biz;
- (int)freqDay;
- (int)freqNum;
- (void)setBiz:;
- (void)setFreqDay:;
- (void)setFreqNum:;
- (id)tipGuide;
- (void)setTipGuide:;
- (void)setWindowGuide:;
- (void).cxx_destruct;
- (id)windowGuide;
+ (id)JSONKeyPathsByPropertyKey;
@end
