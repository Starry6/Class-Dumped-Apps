@interface AWELiveSliceXInstance : NSObject
@property (nonatomic) <IESECSliceXInstanceInterface> sliceXInstance;
@property (nonatomic) <IESLiveSliceXEventForwardDelegate> eventDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSliceXInstance:;
- (id)sliceXInstance;
- (void)triggerSliceXEvent:;
- (id)initWithbizIdentify:context:;
- (id)bindSliceXView:jsonData:fitSize:error:;
- (id)createSliceXViewWithSyncTemplateName:version:jsonDict:error:;
- (void)createSliceXViewWithAsyncTemplateName:version:url:complete:;
- (id)getTrackValue:;
- (id)eventDelegate;
- (void).cxx_destruct;
- (void)setEventDelegate:;
@end
