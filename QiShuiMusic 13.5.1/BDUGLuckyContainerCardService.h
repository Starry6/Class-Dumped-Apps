@interface BDUGLuckyContainerCardService : NSObject
@property (nonatomic) NSMutableArray cards;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)container:didChangeIntrinsicContentSize:;
- (void)containerDidPageReady:sourceParam:;
- (void)installBridgeInterceptor;
- (void)openLynxCardWithURLString:context:completion:;
- (BOOL)pageCustomClose:;
- (void)pageReadyCalledNotification:;
- (BOOL)resizeLynxCard:withIntrinsicContentSize:;
- (void)setCards:;
- (void)showLynxCard:;
- (void)xBridgeWillHandleMethod:container:params:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)cards;
+ (id)sharedInstance;
@end
