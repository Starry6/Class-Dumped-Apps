@interface AWEAttributeStringUpdateBaseProcess : NSObject
@property (nonatomic) AWEPlayInteractionDescriptionElementViewModel viewModel;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEPlayInteractionContext context;
@property (nonatomic) AWEDescriptionContext descriptionContext;
@property (nonatomic) Q type;
@property (nonatomic) Q stringMode;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)attributeStringUpdateProcess;
- (id)markBeforeModify:withAttributeStringMode:;
- (id)handleDescriptionAttributeString:withAttributeName:;
- (unsigned long long)stringMode;
- (void)setStringMode:;
- (id)viewModel;
- (unsigned long long)type;
- (void)setType:;
- (void)setContext:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)context;
- (id)descriptionContext;
- (void)setDescriptionContext:;
@end
