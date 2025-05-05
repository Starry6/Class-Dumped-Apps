@interface MAAutoAssetInfoEnd : NSObject
@property (nonatomic) NSString endLockReason;
@property (nonatomic) q endLockCount;
- (long long)endLockCount;
- (id)initWithLockReason:endingLockCount:;
- (id)initWithCoder:;
- (id)endLockReason;
- (void)encodeWithCoder:;
- (id)summary;
- (void).cxx_destruct;
- (id)description;
+ (BOOL)supportsSecureCoding;
@end
