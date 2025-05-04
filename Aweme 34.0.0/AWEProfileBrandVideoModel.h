@interface AWEProfileBrandVideoModel : MTLModel
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) NSString pullText;
@property (nonatomic) double vodeoStartTime;
@property (nonatomic) double vodeoEndTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aweme;
- (void)setAweme:;
- (BOOL)enableBrandTopVideo;
- (id)pullText;
- (void)setPullText:;
- (double)vodeoStartTime;
- (void)setVodeoStartTime:;
- (double)vodeoEndTime;
- (void)setVodeoEndTime:;
- (void).cxx_destruct;
+ (id)awemeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
