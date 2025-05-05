@interface BDXAudioView : UIView
@property (nonatomic) BDXAudioViewController lifeCycleVc;
@property (nonatomic) <BDXAudioViewLifeCycleDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLifeCycleVc:;
- (id)lifeCycleVc;
- (void)viewControllerDidDisappear;
- (id)init;
- (void)viewControllerWillAppear;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
