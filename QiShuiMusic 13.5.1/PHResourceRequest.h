@interface PHResourceRequest : NSObject
@property (nonatomic) NSString taskIdentifier;
@property (nonatomic) NSURL assetObjectIDURL;
@property (nonatomic) BOOL wantsProgress;
- (id)taskIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setWantsProgress:;
- (id)initWithTaskIdentifier:assetObjectID:;
- (id)initWithTaskIdentifier:assetObjectIDURL:;
- (id)assetObjectIDURL;
- (BOOL)wantsProgress;
+ (BOOL)supportsSecureCoding;
@end
