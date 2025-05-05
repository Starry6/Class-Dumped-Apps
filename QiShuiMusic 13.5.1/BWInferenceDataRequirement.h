@interface BWInferenceDataRequirement : NSObject
@property (nonatomic) q identifier;
- (id)init;
- (long long)identifier;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDataRequirement:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
