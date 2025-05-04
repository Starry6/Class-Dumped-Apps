@interface AWEProfileDynamicCoverModel : MTLModel
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) NSString pullText;
@property (nonatomic) NSNumber startTime;
@property (nonatomic) NSNumber endTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aweme;
- (void)setAweme:;
- (id)pullText;
- (void)setPullText:;
- (void)setStartTime:;
- (id)endTime;
- (void)setEndTime:;
- (void).cxx_destruct;
- (id)startTime;
+ (id)awemeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
