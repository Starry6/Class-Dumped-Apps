@interface AWETextContentModel : MTLModel
@property (nonatomic) q index;
@property (nonatomic) NSString value;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIndex:;
- (id)value;
- (long long)index;
- (id)init;
- (void)setStartTime:;
- (void)setDuration:;
- (void)setValue:;
- (void).cxx_destruct;
- (double)duration;
- (double)startTime;
- (id)copyWithZone:;
+ (id)JSONKeyPathsByPropertyKey;
@end
