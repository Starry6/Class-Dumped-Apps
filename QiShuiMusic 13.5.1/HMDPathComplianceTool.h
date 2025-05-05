@interface HMDPathComplianceTool : NSObject
+ (id)compareAbsolutePath:compliancePaths:isMatch:;
+ (id)compareReleativePath:compliancePaths:isMatch:;
+ (id)complianceReleativePath:compliancePaths:;
+ (id)complianceReleativePath:prefixPath:;
@end
