@interface IESLiveStackBuilder : NSObject
@property (nonatomic) IESLiveStackDynamicRule dynamicAction;
@property (nonatomic) IESLiveLayoutBaseContainer resultContainer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)resultContainer;
- (void)executeAtState:;
- (void)addSubContainerWithAxis:rules:;
- (id)ck_subviews;
- (id)dynamicAction;
- (id)dynamicRule;
- (id)initWithAxis:viewType:spacing:;
- (void)setDynamicAction:;
- (void)setResultContainer:;
- (void).cxx_destruct;
@end
