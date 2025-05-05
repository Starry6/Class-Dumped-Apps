@interface IESLiveMultiLinkerServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealWithMultiLinkerSEI:completion:;
- (void)resolveMultiLinkerSEIMetaInfo:mediaSize:containerSize:completion:;
- (void)resolveMultiLinkerSEIResult:mediaSize:containerSize:isPCVerticalRoom:completion:;
- (void)saas_resolveMultiLinkerSEIMetaInfo:mediaSize:containerSize:completion:;
@end
