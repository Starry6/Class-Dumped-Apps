@interface AWEPlayInteractionDescriptionParsersManager : NSObject
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEPlayInteractionDescriptionElementConfig elementConfig;
@property (nonatomic) AWEPlayInteractionDescriptionContext descriptionContext;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)elementConfig;
- (void)setElementConfig:;
- (BOOL)isSafeSubstringRange:forString:;
- (void)parserDescription;
- (void)parserDescriptionExtraModels;
- (void)updateDescriptionExtraModelsBeforeParser;
- (void)setExtraModelAttribute:attributedString:;
- (void)updateDescriptionExtraModelsAfterParser;
- (void).cxx_destruct;
- (id)descriptionContext;
- (void)setDescriptionContext:;
+ (id)createSimplyDescriptionExtraModelsWithDescriptionInfoModel:;
@end
