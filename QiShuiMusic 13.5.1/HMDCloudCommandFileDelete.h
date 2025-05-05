@interface HMDCloudCommandFileDelete : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)excuteCommand:completion:;
- (void)removeFilesWithRelativePaths:completion:;
+ (id)cloudCommandIdentifier;
+ (id)createInstance;
@end
