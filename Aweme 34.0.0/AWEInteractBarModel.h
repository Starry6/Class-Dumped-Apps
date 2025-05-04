@interface AWEInteractBarModel : AWEBaseApiModel
@property (nonatomic) q type;
@property (nonatomic) NSString bizInfo;
@property (nonatomic) NSArray bars;
@property (nonatomic) q currentBarStatus;
@property (nonatomic) BOOL recordWordAlreadyDisappear;
- (BOOL)checkInfoAvailable;
- (id)bizInfo;
- (void)setBizInfo:;
- (long long)currentBarStatus;
- (void)setCurrentBarStatus:;
- (BOOL)recordWordAlreadyDisappear;
- (void)setRecordWordAlreadyDisappear:;
- (id)bars;
- (long long)type;
- (void)setBars:;
- (void)setType:;
- (void).cxx_destruct;
+ (id)barsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
