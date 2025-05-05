@interface MAAutoAssetInfoInstance : NSObject
@property (nonatomic) NSString autoAssetClientName;
@property (nonatomic) NSString clientProcessName;
@property (nonatomic) q clientProcessID;
@property (nonatomic) MAAutoAssetSelector clientAssetSelector;
@property (nonatomic) NSUUID frameworkInstanceUUID;
- (id)initWithCoder:;
- (id)clientAssetSelector;
- (id)autoAssetClientName;
- (void)encodeWithCoder:;
- (id)summary;
- (void).cxx_destruct;
- (id)clientProcessName;
- (id)frameworkInstanceUUID;
- (id)description;
- (id)initForClientName:withProcessName:withProcessID:usingAssetSelector:associatingFrameworkUUID:;
- (long long)clientProcessID;
+ (BOOL)supportsSecureCoding;
@end
