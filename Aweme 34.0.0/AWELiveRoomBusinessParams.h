@interface AWELiveRoomBusinessParams : NSObject
@property (nonatomic) NSMutableArray businessParamsArray;
@property (nonatomic) NSArray businessParams;
- (id)businessParams;
- (void)addClickParams:businessType:;
- (void)addFirstShowParams:businessType:;
- (void)addContextParams:businessType:;
- (id)getParamWithBusinessType:;
- (id)businessParamsArray;
- (void)addJsonString:businessType:;
- (void)setBusinessParamsArray:;
- (void).cxx_destruct;
@end
