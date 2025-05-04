@interface AWESearchImageReuseHandler : NSObject
@property (nonatomic) BOOL shouldUpdatePlayer;
@property (nonatomic) UIView<AFDSlidesViewProtocol> imageSliderView;
@property (nonatomic) <AWESearchImageReuseHandlerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)imageSliderView;
- (void)setImageSliderView:;
- (void)setShouldUpdatePlayer:;
- (BOOL)shouldUpdatePlayer;
- (BOOL)hasPrepareToReuse;
- (void)resumeSearchElementContext:;
- (void)stashSearchElementContext;
- (BOOL)enableReplaceSlidesView;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)reuseIdentifier;
@end
