@interface HMDURLSessionManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)asyncRequestWithModel:callBackWithResponse:;
- (void)uploadWithModel:callBackWithResponse:;
@end
