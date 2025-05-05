@interface SASyncVerificationResult : AceObject
@property (nonatomic) q fail;
@property (nonatomic) NSArray failedObjectIds;
@property (nonatomic) NSString name;
@property (nonatomic) q total;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setName:;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)name;
- (long long)total;
- (long long)fail;
- (void)setTotal:;
- (void)setFail:;
- (id)failedObjectIds;
- (void)setFailedObjectIds:;
+ (id)verificationResult;
+ (id)verificationResultWithDictionary:context:;
@end
