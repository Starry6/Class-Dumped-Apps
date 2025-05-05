@interface IESECGoodsDetailHeaderTracker : NSObject
@property (nonatomic) IESECGoodsDetailHeaderServiceProvider serviceProvider;
@property (nonatomic) IESECGoodsDetailPageContext pageContext;
@property (nonatomic) IESECGoodsDetailHeaderModel headModel;
@property (nonatomic) <IESECGoodsDetailHeaderContainerService> container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)headModel;
- (id)initWithServiceProvider:context:data:;
- (void)setHeadModel:;
- (void)trackWithADEventName:adLabel:adRefer:andParams:;
- (void)trackWithEventName:andParams:btmID:;
- (void)trackWithEventName:andParams:btmID:once:;
- (void)setContainer:;
- (id)container;
- (void).cxx_destruct;
- (id)serviceProvider;
- (void)setServiceProvider:;
- (id)pageContext;
- (void)setPageContext:;
@end
