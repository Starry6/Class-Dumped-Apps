@interface NEFilterProvider : NEProvider
@property (nonatomic) NEFilterProviderConfiguration filterConfiguration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)handleReport:;
- (void)startFilterWithCompletionHandler:;
- (void)stopFilterWithReason:completionHandler:;
- (id)filterConfiguration;
- (void)setFilterConfiguration:;
@end
