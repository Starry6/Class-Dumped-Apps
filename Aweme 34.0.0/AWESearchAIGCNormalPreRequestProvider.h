@interface AWESearchAIGCNormalPreRequestProvider : AWESearchPreRequestAIGCProvider
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)requestParamsContextWithObject:;
+ (id)preNetworkRequestWithParamsContext:object:;
@end
