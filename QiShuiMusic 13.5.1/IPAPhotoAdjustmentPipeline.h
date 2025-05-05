@interface IPAPhotoAdjustmentPipeline : NSObject
@property (nonatomic) NSString platform;
@property (nonatomic) Q version;
- (id)string;
- (unsigned long long)version;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)platform;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithPlatform:version:;
- (BOOL)isEqualToAdjustmentPipeline:;
+ (id)current;
+ (id)pipelineForPlatform:version:;
+ (id)pipelineForVersion:;
+ (id)pipelineFromString:;
@end
