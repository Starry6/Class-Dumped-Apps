@interface AWEShareBookBaseService : AWEShareCommonImpl
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showPanelWithBook:logExtraDict:onViewController:;
- (id)contextWithBook:;
- (id)statsShareBookStage;
@end
