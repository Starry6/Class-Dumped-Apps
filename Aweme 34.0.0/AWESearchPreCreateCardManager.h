@interface AWESearchPreCreateCardManager : NSObject
@property (nonatomic) NSDictionary config;
@property (nonatomic) NSArray viewModels;
@property (nonatomic) BOOL isStopPreCreateCard;
@property (nonatomic) @? preCreateCardDataBlock;
- (void)registerConfig:;
- (void)generatePreCreateCardDataWithChannel:url:dataModelBlock:renderModelBlock:comContextBlock:completion:;
- (void)setIsStopPreCreateCard:;
- (void)onPreCreateAction:;
- (BOOL)canPreCreateCard;
- (void)setPreCreateCardDataBlock:;
- (BOOL)isStopPreCreateCard;
- (id)preCreateCardDataBlock;
- (void)preCreateCardIfNeed:;
- (void)stopPreCreateCard;
- (void)setConfig:;
- (id)init;
- (id)config;
- (void).cxx_destruct;
- (void)setViewModels:;
- (id)viewModels;
@end
