@interface AWEDetailAILoraProfileModel : AWEDetailCommonDiffableModel
@property (nonatomic) ACCAIGCLoraProfileModel profileModel;
@property (nonatomic) NSString modelId;
@property (nonatomic) NSString effectId;
@property (nonatomic) BOOL isLoraUGC;
@property (nonatomic) ACCAIGCLoraPersonInfo currentSelectLoraProfileModel;
@property (nonatomic) NSNumber canShowCell;
@property (nonatomic) Q selectIndex;
- (unsigned long long)selectIndex;
- (void)setSelectIndex:;
- (id)canShowCell;
- (void)setCanShowCell:;
- (id)currentSelectLoraProfileModel;
- (BOOL)isLoraUGC;
- (void)setIsLoraUGC:;
- (void)setCurrentSelectLoraProfileModel:;
- (void)setModelId:;
- (void).cxx_destruct;
- (id)modelId;
- (id)effectId;
- (id)profileModel;
- (void)setProfileModel:;
- (void)setEffectId:;
@end
