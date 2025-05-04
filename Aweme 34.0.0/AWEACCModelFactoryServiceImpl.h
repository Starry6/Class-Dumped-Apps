@interface AWEACCModelFactoryServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createUserModel;
- (id)createChallengeModelWithItemID:challengeName:;
- (id)createCutSameTemplateModelWithEffect:isVideoAndPicMixed:;
- (id)createMVTemplateWithEffectModel:urlPrefix:;
- (id)createTextExtra;
- (id)createTextExtra:;
- (id)createTextExtra:subType:;
- (id)copyTextExtra:;
- (id)createMusicModel;
- (id)createMusicModelWithJsonDictionary:;
- (id)createAwemeModelWithJsonDictionary:;
- (void)updateTextExtra:type:;
- (void)updateTextExtra:subtype:;
@end
