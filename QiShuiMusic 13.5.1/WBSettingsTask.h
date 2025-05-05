@interface WBSettingsTask : NSObject
@property (nonatomic) q taskType;
@property (nonatomic) WBWebsiteDataRecord websiteDataRecord;
- (long long)taskType;
- (void).cxx_destruct;
- (id)initWithType:websiteDataRecord:;
- (id)websiteDataRecord;
+ (id)taskWithType:;
+ (id)taskForDeletingIndividualWebsiteDataWithRecord:;
@end
