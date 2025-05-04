@interface AWELifeFeedsLynxItem : NSObject
@property (nonatomic) BOOL isReady;
@property (nonatomic) NSString containerId;
@property (nonatomic) UIView<AnnieXContainerBaseProtocol> lynxView;
@property (nonatomic) AWELifeFeedsPageContext pageContext;
@property (nonatomic) <AWELifeFeedsLynxItemDelegate> delegate;
@property (nonatomic) NSMutableDictionary subscribeActionMap;
@property (nonatomic) BOOL didEndLoad;
@property (nonatomic) {CGSize=dd} size;
- (id)lynxView;
- (void)setLynxView:;
- (id)subscribeActionMap;
- (BOOL)didEndLoad;
- (void)setDidEndLoad:;
- (void)subscribeAction:;
- (void)addSubscribeActionList:;
- (void)setSubscribeActionMap:;
- (id)init;
- (id)containerId;
- (id)delegate;
- (BOOL)isReady;
- (id)size;
- (void).cxx_destruct;
- (void)setSize:;
- (void)setDelegate:;
- (void)setIsReady:;
- (void)setPageContext:;
- (id)pageContext;
@end
