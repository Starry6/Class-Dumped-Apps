@interface IESLiveIAPPayModel : NSObject
@property (nonatomic) IESLiveIAPModel iapModel;
@property (nonatomic) NSNumber source;
@property (nonatomic) NSDictionary extraParams;
- (void)setExtraParams:;
- (id)extraParams;
- (id)iapModel;
- (id)initWithIapModel:source:extraParams:;
- (void)setIapModel:;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
@end
