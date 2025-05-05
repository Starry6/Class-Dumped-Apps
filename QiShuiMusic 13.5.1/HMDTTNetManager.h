@interface HMDTTNetManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)asyncRequestWithModel:callBackWithResponse:;
- (BOOL)isChromium;
- (id)responseWithTTResponse:;
- (void)uploadWithModel:callBackWithResponse:;
@end
