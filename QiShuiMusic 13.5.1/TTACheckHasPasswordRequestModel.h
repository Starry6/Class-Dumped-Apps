@interface TTACheckHasPasswordRequestModel : NSObject
@property (nonatomic) NSString mobile;
@property (nonatomic) NSString target;
@property (nonatomic) BOOL needMix;
@property (nonatomic) NSDictionary extraDic;
- (BOOL)needMix;
- (id)extraDic;
- (void)setExtraDic:;
- (void)setNeedMix:;
- (id)init;
- (void)setTarget:;
- (void).cxx_destruct;
- (id)target;
- (id)mobile;
- (void)setMobile:;
@end
