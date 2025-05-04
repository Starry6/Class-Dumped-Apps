@interface AWETeenDiscoverNavConfigModel : AWEBaseApiModel
@property (nonatomic) NSString desc;
@property (nonatomic) NSString bubble;
@property (nonatomic) AWEURLModel icon;
@property (nonatomic) BOOL showYellowDot;
@property (nonatomic) NSNumber showSeconds;
- (BOOL)showYellowDot;
- (void)setShowYellowDot:;
- (id)icon;
- (void)setDesc:;
- (id)desc;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)bubble;
- (void)setBubble:;
- (void)setShowSeconds:;
- (id)showSeconds;
+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)showYellowDotJSONTransformer;
@end
