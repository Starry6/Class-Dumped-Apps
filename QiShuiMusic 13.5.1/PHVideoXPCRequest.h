@interface PHVideoXPCRequest : PHResourceRequest
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) PHVideoRequestBehaviorSpec behaviorSpec;
- (id)behaviorSpec;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)size;
- (id)initWithTaskIdentifier:assetObjectID:size:behavior:;
+ (BOOL)supportsSecureCoding;
@end
