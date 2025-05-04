@interface AWEPropApplyRawTypeStrategy : NSObject
@property (nonatomic) <AWEPropApplyContextProtocol> context;
@property (nonatomic) AWEPropApplyNormalStrategy normalApplyStrategy;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithApplyContext:;
- (void)applyProp:;
- (BOOL)canApplyProp:;
- (void)preparePropApplyWithProp:currentProp:completion:;
- (id)normalApplyStrategy;
- (id)initWithApplyContext:normalApplyStrategy:;
- (void)setNormalApplyStrategy:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
