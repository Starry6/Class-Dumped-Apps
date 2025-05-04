@interface AWETeenPlayInteractionDescriptionAttributeStringManager : NSObject
@property (nonatomic) NSMutableArray processArray;
@property (nonatomic) AWEAwemeModel currentModel;
@property (nonatomic) AWETeenPlayInteractionContext context;
@property (nonatomic) AWETeenDescriptionContext descriptionContext;
@property (nonatomic) NSMutableAttributedString attributedString;
- (id)handlingDescriptionAttributeStringWithModel:withContext:withDescriptionContext:withAttributeStringMode:withString:;
- (id)processArray;
- (id)processListDictionary;
- (id)processArrayList;
- (void)addProcess:toArr:;
- (id)handlingDescriptionAttributeStringWithModel:withContext:withDescriptionContext:withAttributeStringMode:;
- (void)setProcessArray:;
- (void)setAttributedString:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)attributedString;
- (id)currentModel;
- (void)setCurrentModel:;
- (id)descriptionContext;
- (void)setDescriptionContext:;
@end
