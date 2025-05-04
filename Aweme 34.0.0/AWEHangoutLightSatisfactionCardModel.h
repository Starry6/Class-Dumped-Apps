@interface AWEHangoutLightSatisfactionCardModel : MTLModel
@property (nonatomic) NSString cardID;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString frontData;
@property (nonatomic) double cardRatio;
@property (nonatomic) NSNumber index;
@property (nonatomic) NSNumber startTime;
@property (nonatomic) NSNumber endTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)cardRatio;
- (void)setCardRatio:;
- (id)frontData;
- (void)setFrontData:;
- (void)setIndex:;
- (id)schema;
- (id)index;
- (void)setSchema:;
- (void)setStartTime:;
- (id)endTime;
- (void)setEndTime:;
- (void).cxx_destruct;
- (id)startTime;
- (id)cardID;
- (void)setCardID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
