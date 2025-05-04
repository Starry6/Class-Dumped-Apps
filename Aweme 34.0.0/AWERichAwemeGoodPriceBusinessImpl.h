@interface AWERichAwemeGoodPriceBusinessImpl : NSObject
@property (nonatomic) <AWEPlayInteractionContextProtocol> playInteractionContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldShowPriceWithModel:;
- (id)playInteractionContext;
- (void)setPlayInteractionContext:;
- (void)updateWithContainerView:model:;
- (void)elementWillDisplayWithModel:;
- (void)openGoodDetailPageWithModel:;
- (id)getPriceAttributedStringWithProductInfo:;
- (id)getPriceDescriptionAttributedStringWithString:;
- (id)getSalesDescriptionAttributedStringWithString:;
- (id)createbtmInfoDict;
- (void)calculatePrice:getYuan:getJiao:getFen:;
- (void).cxx_destruct;
+ (BOOL)shouldShowElementWithContext:;
+ (void)checkIsValid:;
+ (BOOL)checkAnchorTitleEmpty:;
@end
