@interface AWETeenStoryContainerCollectionView : UICollectionView
@property (nonatomic) BOOL enableEnterProfile;
@property (nonatomic) BOOL enableEdgePanWhenBounce;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)edgePan:;
- (void)setEnableEdgePanWhenBounce:;
- (BOOL)enableEnterProfile;
- (void)setEnableEnterProfile:;
- (BOOL)enableEdgePanWhenBounce;
- (BOOL)gestureRecognizerShouldBegin:;
@end
