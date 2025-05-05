@interface IESECScoreModel : MTLModel
@property (nonatomic) NSNumber score;
@property (nonatomic) NSString rating;
@property (nonatomic) NSNumber percentage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rating;
- (id)score;
- (void)setScore:;
- (void).cxx_destruct;
- (id)percentage;
- (void)setRating:;
- (void)setPercentage:;
+ (id)JSONKeyPathsByPropertyKey;
@end
