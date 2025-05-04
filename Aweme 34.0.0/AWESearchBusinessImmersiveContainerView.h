@interface AWESearchBusinessImmersiveContainerView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) AWESearchDynamicEngine searchDynamicEngine;
@property (nonatomic) AWESearchImmersiveModel model;
@property (nonatomic) <AWEBusinessImmersiveContainerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)createImageView;
- (float)getScreenWidth;
- (void)createLynxView:;
- (void)updateLynxView:;
- (id)searchDynamicEngine;
- (id)getBusinessImmersiveContainerViewBounds;
- (void)setSearchDynamicEngine:;
- (void)setModel:;
- (id)delegate;
- (id)initWithDelegate:;
- (id)model;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)layoutSubviews;
- (void)setImageView:;
- (id)imageView;
- (void)updateImageView;
- (void)updateWithModel:;
@end
