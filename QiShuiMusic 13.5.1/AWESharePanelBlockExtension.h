@interface AWESharePanelBlockExtension : NSObject
@property (nonatomic) @? block;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sharePanelDidAppear:;
- (void)sharePanelDidDisappear:;
- (void)sharePanelWillAppear:;
- (void)sharePanelWillDisappear:;
- (id)block;
- (id)initWithBlock:;
- (void).cxx_destruct;
- (void)setBlock:;
+ (id)runBlock:onEvent:;
@end
