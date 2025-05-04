@interface AWEPaySwiftImpl.CCMRegTrafficInfo : MTLModel
@property (nonatomic) NSString trafficId;
@property (nonatomic) NSString regHintType;
@property (nonatomic) NSString regGuideText;
- (id)trafficId;
- (void)setTrafficId:;
- (id)regHintType;
- (void)setRegHintType:;
- (id)regGuideText;
- (void)setRegGuideText:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
