@interface AWEFeedFirstPublishStimulateView : UIView
@property (nonatomic) NSBundle feedBundle;
@property (nonatomic) @? completion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addMaskView;
- (void)addStimulateAnimation;
- (id)feedBundle;
- (id)imageWithClipImage:;
- (void)preLoadUserAvatarImage;
- (void)setFeedBundle:;
- (id)completion;
- (void)setCompletion:;
- (void)setUp;
- (void).cxx_destruct;
- (id)imageForKey:;
- (void)setImage:forKey:;
+ (id)firstPublishStimulateView;
+ (id)addFirstPublishStimulateView;
+ (id)addFirstPublishStimulateViewWithCompletion:;
@end
