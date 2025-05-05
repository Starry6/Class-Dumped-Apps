@interface MAAutoAssetLockReason : NSObject
@property (nonatomic) NSString autoAssetClientName;
@property (nonatomic) NSString lockReason;
- (id)lockReason;
- (id)initWithCoder:;
- (void)setAutoAssetClientName:;
- (id)autoAssetClientName;
- (void)encodeWithCoder:;
- (void)setLockReason:;
- (id)summary;
- (id)initFromClientLockReasonKey:;
- (void).cxx_destruct;
- (id)initForClientName:forLockReason:;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
