@interface AWECoverTextEditingModel : MTLModel
@property (nonatomic) NSString effectId;
@property (nonatomic) Q type;
@property (nonatomic) NSArray texts;
@property (nonatomic) AWEStoryTextImageModel textModel;
@property (nonatomic) AWECoverTextPackage textPackage;
@property (nonatomic) Q cursorLocation;
- (id)textModel;
- (void)setTextModel:;
- (id)trackTextIdString;
- (id)textPackage;
- (void)setTextPackage:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (unsigned long long)cursorLocation;
- (void)setCursorLocation:;
- (void)setTexts:;
- (id)texts;
- (id)effectId;
- (void)setEffectId:;
@end
