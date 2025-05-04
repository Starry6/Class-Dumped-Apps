@interface AWEClassroomModel.ClassroomRangeModel : MTLModel
@property (nonatomic) q from;
@property (nonatomic) q to;
- (id)initWithDictionary:error:;
- (id)init;
- (id)initWithCoder:;
- (void)setFrom:;
- (long long)from;
- (void)setTo:;
- (long long)to;
+ (id)JSONKeyPathsByPropertyKey;
@end
