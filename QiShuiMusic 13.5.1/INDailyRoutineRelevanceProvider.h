@interface INDailyRoutineRelevanceProvider : INRelevanceProvider
@property (nonatomic) q situation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (id)initWithSituation:;
- (long long)situation;
+ (BOOL)supportsSecureCoding;
@end
