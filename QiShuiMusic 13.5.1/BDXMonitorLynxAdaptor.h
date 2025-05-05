@interface BDXMonitorLynxAdaptor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getUrlWithView:;
- (void)attachVirtualAid:view:;
- (id)getMonitorWithView:;
- (BOOL)matchWithView:;
- (void)startHook;
- (void)traceBeginWithName:;
- (void)traceEndWithName:;
- (void)traceInstantWithName:;
- (long long)platform;
@end
