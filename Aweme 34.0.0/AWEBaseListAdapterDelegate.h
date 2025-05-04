@interface AWEBaseListAdapterDelegate : NSObject
@property (nonatomic) <AWEBaseListViewControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)listAdapter:willDisplayObject:atIndex:;
- (void)listAdapter:didEndDisplayingObject:atIndex:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
