@interface KVProfileInfo : NSObject
@property (nonatomic) NSData buffer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)deviceType;
- (id)buildVersion;
- (id)init;
- (id)buffer;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (unsigned int)datasetCount;
- (id)capturedTime;
- (id)JSONWithIndent:;
- (id)initFromDictionary:error:;
- (id)initWithDatasetCount:capturedTime:deviceType:buildVersion:error:;
- (id)initWithBuffer:error:;
- (BOOL)isEqualToProfileInfo:;
+ (id)syntheticWithDatasetCount:error:;
+ (id)capturedWithDatasetCount:error:;
@end
