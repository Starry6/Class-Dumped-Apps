@interface AWEShareLongVideoService : AWEShareCommonImpl
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showPanelWithLongVideo:logExtraDict:extraDict:onViewController:;
- (id)getVerticalCoverUrlString:;
- (id)contextFromLongVideo:;
- (BOOL)canShowFeedbackWithContext:;
@end
