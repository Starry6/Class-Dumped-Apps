@interface IESECBTMContextV2 : NSObject
@property (nonatomic) NSMutableDictionary bcmUnitParamsPrivate;
@property (nonatomic) NSString btmInfo;
@property (nonatomic) NSDictionary bcmDescription;
@property (nonatomic) UIResponder host;
@property (nonatomic) NSArray targetPages;
@property (nonatomic) NSDictionary bcmUnitParams;
- (id)btmInfo;
- (void)setTargetPages:;
- (void)appendAllBcmUnitParams:;
- (void)appendBcmUnitParamsBiz:params:;
- (void)appendEcomEntranceUnitParams:;
- (void)appendPageShowUnitParams:;
- (id)bcmDescription;
- (id)bcmUnitParams;
- (id)bcmUnitParamsPrivate;
- (id)obtainEventBtmParamsWithEventName:;
- (void)setBcmDescription:;
- (void)setBcmUnitParamsPrivate:;
- (void)setBtmInfo:;
- (void)setBtmInfoWithCode:index:;
- (id)targetPages;
- (void)willJumpToNextPage;
- (id)init;
- (id)host;
- (void)setHost:;
- (void).cxx_destruct;
+ (id)contextWithBtmInfo:host:bcmDescription:;
@end
