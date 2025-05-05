@interface IESECDetailSaaSBlockFeature : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)processParamsForRequest:withOrigParams:;
- (id)saasUnableToProcess:;
- (void)toastUnableToProcedure;
- (void)updateRequestForSaaS:;
- (id)init;
- (void)dealloc;
+ (id)shared;
@end
