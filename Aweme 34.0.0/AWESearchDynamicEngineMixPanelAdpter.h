@interface AWESearchDynamicEngineMixPanelAdpter : NSObject
@property (nonatomic) AWESearchDynamicEngine lynxEngine;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lynxEngine;
- (void)mixPanelListGetProgressWillMove:;
- (void)mixPanelListDidCancel;
- (void)mixPanelListWillClose;
- (void)setLynxEngine:;
- (id)initWithLynxEngine:;
- (void).cxx_destruct;
@end
