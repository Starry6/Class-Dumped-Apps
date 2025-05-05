@interface HMDDomesticURLSettings : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)configFetchDefaultHosts;
+ (id)crashUploadDefaultHost;
+ (id)exceptionUploadDefaultHost;
+ (id)fileUploadDefaultHost;
+ (id)performanceUploadDefaultHost;
+ (id)userExceptionUploadDefaultHost;
+ (id)defaultHost;
@end
