@interface CNUIUserActionWorkspaceURLOpener : NSObject
@property (nonatomic) LSApplicationWorkspace workspace;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)workspace;
- (id)init;
- (void).cxx_destruct;
- (id)initWithWorkspace:;
- (id)openURL:withScheduler:;
- (id)openURL:isSensitive:withScheduler:;
- (id)openURL:isSensitive:connectionEndpoint:withScheduler:;
+ (id)urlCouldNotBeOpenedErrorWithURL:;
+ (id)openConfigurationWithEndpoint:isSensitive:;
@end
