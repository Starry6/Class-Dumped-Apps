@interface WBSAvailableAppWithExtension : NSObject
@property (nonatomic) NSString adamID;
@property (nonatomic) NSString platformSpecificBundleID;
@property (nonatomic) NSString requiredTeamID;
- (void).cxx_destruct;
- (id)adamID;
- (id)initWithAdamID:platformSpecificBundleID:;
- (id)platformSpecificBundleID;
- (id)requiredTeamID;
- (void)setRequiredTeamID:;
@end
