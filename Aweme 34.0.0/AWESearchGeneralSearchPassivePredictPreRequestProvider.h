@interface AWESearchGeneralSearchPassivePredictPreRequestProvider : AWESearchPreRequestGeneralProvider
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)requestParamsContextWithObject:;
+ (id)preNetworkRequestWithParamsContext:object:;
+ (id)predictIDFromParams:;
+ (id)predictTypeFromParams:;
+ (id)predictFetchParamsFromParams:;
@end
