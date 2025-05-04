@interface AWEYapLynxPromotionModel : AWEBaseApiModel
@property (nonatomic) Q businessCode;
@property (nonatomic) NSString businessMsg;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString info;
@property (nonatomic) NSDictionary trackParams;
- (id)trackParams;
- (void)setTrackParams:;
- (unsigned long long)businessCode;
- (id)businessMsg;
- (void)setBusinessCode:;
- (void)setBusinessMsg:;
- (id)schema;
- (void)setInfo:;
- (id)info;
- (void)setSchema:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
