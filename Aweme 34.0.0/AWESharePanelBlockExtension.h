@interface AWESharePanelBlockExtension : NSObject
@property (nonatomic) @? block;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sharePanelWillAppear:;
- (void)sharePanelDidAppear:;
- (void)sharePanelWillDisappear:;
- (void)sharePanelDidDisappear:;
- (id)initWithBlock:;
- (id)block;
- (void)setBlock:;
- (void).cxx_destruct;
+ (id)runBlock:onEvent:;
@end
