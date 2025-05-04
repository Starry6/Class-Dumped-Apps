@interface AWELynxScrollView : LynxUI
@property (nonatomic) NSString bounceToDetailSchema;
@property (nonatomic) AWEGeneralSearchScrollTailView footerView;
@property (nonatomic) BOOL isTransfering;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)layoutDidFinished;
- (BOOL)isTransfering;
- (void)setIsTransfering:;
- (void)index:requestReset:;
- (void)setBounceToDetailSchema:;
- (id)bounceToDetailSchema;
- (void)detailSchema:requestReset:;
- (void)detailTextName:requestReset:;
- (void)setFooterView:;
- (id)contentOffset;
- (id)footerView;
- (void)scrollViewDidScroll:;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void)updateContentSize;
- (id)createView;
+ (id)__lynx_prop_config__695;
+ (id)__lynx_prop_config__582;
+ (id)__lynx_prop_config__736;
@end
