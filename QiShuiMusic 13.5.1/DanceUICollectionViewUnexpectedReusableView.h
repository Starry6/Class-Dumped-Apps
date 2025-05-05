@interface DanceUICollectionViewUnexpectedReusableView : UICollectionReusableView
@property (nonatomic) NSString elementKind;
- (id)_elementKind;
- (BOOL)_wasDequeued;
- (id)danceuiElementKind;
- (BOOL)danceuiWasDequeued;
- (id)initWithElementKind:;
- (id)elementKind;
- (void).cxx_destruct;
- (void)setElementKind:;
+ (void)danceui_preload;
@end
