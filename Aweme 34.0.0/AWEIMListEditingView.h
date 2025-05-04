@interface AWEIMListEditingView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) @? lastBindingHandlerBlock;
@property (nonatomic) <AWEIMListEditingViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didTapListEditingView;
- (void)__updateSelectUI;
- (id)lastBindingHandlerBlock;
- (void)setLastBindingHandlerBlock:;
- (void)updateEditingStyle:;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)layoutSubviews;
- (void)setImageView:;
- (id)imageView;
@end
