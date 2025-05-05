@interface CNReputationResult : NSObject
@property (nonatomic) CNReputationHandle handle;
@property (nonatomic) q score;
- (long long)score;
- (id)handle;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithHandle:score:;
+ (id)descriptionForScore:;
@end
