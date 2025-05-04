@interface AWEECShoppingAIGuideSliceXInstance : NSObject
@property (nonatomic) <IESECSliceXInstanceInterface> sliceXInstance;
@property (nonatomic) <IESECSliceXEventForwardDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithBizIdentify:;
- (void)setSliceXInstance:;
- (id)sliceXInstance;
- (void)triggerSliceXEvent:;
- (void)createSliceXViewWithCardViewModel:completion:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
