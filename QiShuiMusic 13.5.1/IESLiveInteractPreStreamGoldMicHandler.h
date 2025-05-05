@interface IESLiveInteractPreStreamGoldMicHandler : NSObject
@property (nonatomic) IESLiveInteractPreStreamGoldMicAPI api;
- (id)createMicInfoItemsArrayForInitializingWithUser:;
- (void)requestForGoldMicInfoMationWithUser:api:roomID:;
- (void)requestForGoldMicInfoMationWithUser:roomID:;
- (void)startMultiOrderSingModeWithItemsArray:WithUser:;
- (void).cxx_destruct;
- (id)api;
- (void)setApi:;
@end
