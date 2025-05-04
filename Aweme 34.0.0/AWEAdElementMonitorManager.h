@interface AWEAdElementMonitorManager : NSObject
@property (nonatomic) AWEAwemeModel aweModel;
@property (nonatomic) NSMutableSet elementSet;
@property (nonatomic) <AWECommerceComponentContext> commerceContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)commerceContext;
- (void)setCommerceContext:;
- (id)aweModel;
- (void)setAweModel:;
- (id)elementSet;
- (void)elementBlock:;
- (void)elementMonitor:;
- (id)allowElementList;
- (id)blockElementList;
- (void)setElementSet:;
- (void)setModel:;
- (void).cxx_destruct;
- (void)reset;
- (void)willDisplay;
+ (BOOL)canShowComponentWithContext:;
@end
