@interface AWEProfileStickCollectionViewDelegateForwarder : NSObject
@property (nonatomic) <UICollectionViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)delegate;
- (BOOL)respondsToSelector:;
- (void)scrollViewDidScroll:;
- (void)scrollViewDidEndDecelerating:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void)setDelegate:;
- (id)methodSignatureForSelector:;
@end
