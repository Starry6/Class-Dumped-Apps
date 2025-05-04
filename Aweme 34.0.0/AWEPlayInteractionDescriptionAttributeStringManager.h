@interface AWEPlayInteractionDescriptionAttributeStringManager : NSObject
@property (nonatomic) NSMutableArray processArray;
@property (nonatomic) AWEAwemeModel currentModel;
@property (nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> context;
@property (nonatomic) AWEDescriptionContext descriptionContext;
@property (nonatomic) NSMutableAttributedString attributedString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
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
