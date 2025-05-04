@interface AWEPlayInteractionDescriptionScrollView : UIScrollView
@property (nonatomic) NSHashTable delegateSet;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)layoutSubviews;
- (id)delegateSet;
- (void)setDelegateSet:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)addDelegate:;
- (void).cxx_destruct;
@end
