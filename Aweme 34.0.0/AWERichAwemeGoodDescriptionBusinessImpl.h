@interface AWERichAwemeGoodDescriptionBusinessImpl : NSObject
@property (nonatomic) AWERichAwemeGoodDescriptionView descriptionView;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) <AWEPlayInteractionContextProtocol> playInteractionContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hideExtraDescription;
- (BOOL)shouldShowDescriptionWithModel:;
- (id)playInteractionContext;
- (void)setPlayInteractionContext:;
- (void)updateWithContainerView:model:;
- (void)elementWillDisplayWithModel:;
- (id)getExtraDescriptionAttributedStringWithString:;
- (void)openGoodDetailPageWithModel:clickAreaString:;
- (id)getTitleAttributedStringWithString:;
- (id)getDescriptionAttributedStringWithString:extraDescriptionAttributedString:;
- (id)getEllipsisString;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
- (id)descriptionView;
- (void)setDescriptionView:;
+ (BOOL)shouldShowElementWithContext:;
@end
