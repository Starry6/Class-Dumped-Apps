@interface AWEIMSkylightFlashBackDataBuilder : NSObject
@property (nonatomic) BOOL waitting;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)buildViewModelsWithContext:bizType:;
- (id)buildViewModelsDynamicWithBizModel:;
- (void)setWaitting:;
- (BOOL)checkEnableBuildDataWithBizModel:;
- (BOOL)waitting;
- (id)buildViewModelsSimpleWithBizModel:;
@end
