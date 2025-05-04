@interface AWELiteVibratorInfo : MTLModel
@property (nonatomic) BOOL enable;
@property (nonatomic) q style;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enable;
- (long long)style;
- (void)setEnable:;
- (void)setStyle:;
+ (id)styleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
