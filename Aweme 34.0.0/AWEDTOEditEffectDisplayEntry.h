@interface AWEDTOEditEffectDisplayEntry : MTLModel
@property (nonatomic) NSString effectId;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStartTime:;
- (double)endTime;
- (void)setEndTime:;
- (void).cxx_destruct;
- (double)startTime;
- (id)effectId;
- (void)setEffectId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
