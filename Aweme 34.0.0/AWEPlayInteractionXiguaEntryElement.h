@interface AWEPlayInteractionXiguaEntryElement : AWEPlayInteractionLeftElement
@property (nonatomic) AWEXiGuaFeedEntryView xiguaEntryView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)updateVideoSourceImageView;
- (id)xiguaEntryView;
- (void)setXiguaEntryView:;
- (void)viewDidLoad;
- (void).cxx_destruct;
+ (BOOL)shouldActiveWithData:context:;
+ (id)activateInfoWithContext:;
@end
