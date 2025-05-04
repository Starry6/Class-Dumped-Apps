@interface AWEDanmakuMetalContainerView : UIView
@property (nonatomic) NSMutableArray danmakuDescriptors;
@property (nonatomic) <XIGDanmakuContainerViewDelegate> containerViewDelegate;
@property (nonatomic) <AWEDanmakuMetalContainerViewDelegate> metalContainerViewDelegate;
@property (nonatomic) @? block;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addDanmakuDescriptor:;
- (void)removeDanmakuDescriptor:;
- (void)setDanmakuDescriptors:;
- (id)danmakuDescriptors;
- (id)containerViewDelegate;
- (id)danmakuThatCanHandleTouch:;
- (void)setContainerViewDelegate:;
- (void)setMetalContainerViewDelegate:;
- (id)metalContainerViewDelegate;
- (id)initWithFrame:;
- (id)block;
- (void)setBlock:;
- (void)touchesEnded:withEvent:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (id)hitTest:withEvent:;
+ (Class)layerClass;
@end
