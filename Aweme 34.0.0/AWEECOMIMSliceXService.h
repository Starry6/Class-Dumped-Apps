@interface AWEECOMIMSliceXService : NSObject
@property (nonatomic) <IESECSliceXInstanceInterface> sliceXInstance;
@property (nonatomic) <AWEECOMIMSliceXServiceDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithBizIdentify:;
- (void)setSliceXInstance:;
- (id)sliceXInstance;
- (void)preloadSliceXTemplates:;
- (void)preCreateViews;
- (id)createSliceXView:completion:;
- (void)bindSliceXView:dataSource:uniqueID:fitSize:completion:;
- (void)triggerSliceXEvent:;
- (void)onSlicePerfReportWithEventName:params:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
