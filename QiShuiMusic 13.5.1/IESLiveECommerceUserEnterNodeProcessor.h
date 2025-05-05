@interface IESLiveECommerceUserEnterNodeProcessor : IESLiveConsumeUserEnterNodeProcessor
- (id)createNodeWithMessage:;
- (BOOL)enableUserEnterWithMessage:;
- (void)nodeViewDidAddedToContainerWithNode:;
@end
