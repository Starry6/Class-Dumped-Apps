@interface CSJAdCallListenModel : NSObject
@property (nonatomic) <CSJAd> adModel;
@property (nonatomic) NSString position;
@property (nonatomic) NSDate dailTime;
@property (nonatomic) NSNumber dailActionType;
@property (nonatomic) BOOL isWebCall;
@property (nonatomic) BOOL toListen;
- (id)adModel;
- (id)dailActionType;
- (id)dailTime;
- (BOOL)isWebCall;
- (void)setAdModel:;
- (void)setDailActionType:;
- (void)setDailTime:;
- (void)setIsWebCall:;
- (void)setToListen:;
- (BOOL)toListen;
- (void)setPosition:;
- (id)position;
- (id)init;
- (void).cxx_destruct;
@end
