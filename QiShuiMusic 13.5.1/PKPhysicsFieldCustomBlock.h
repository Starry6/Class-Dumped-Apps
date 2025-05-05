@interface PKPhysicsFieldCustomBlock : PKPhysicsField
- (void).cxx_destruct;
- (id)initWithCustomBlock:;
- (id)initWithCustomBatchBlock:;
+ (id)fieldWithCustomBatchBlock:;
+ (id)fieldWithCustomBlock:;
@end
