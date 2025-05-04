@interface AWEIMMessageNotice_Action_Plugin : AWEIMFlexComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)didClickWithTemplateModelIndex:;
- (void)trackAppealNotice;
@end
