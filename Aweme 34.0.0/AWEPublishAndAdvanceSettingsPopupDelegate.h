@interface AWEPublishAndAdvanceSettingsPopupDelegate : NSObject
@property (nonatomic) AWEPostPageElementCenter elementCenter;
@property (nonatomic) AWEVideoPublishViewModel publishModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)publishModel;
- (void)setPublishModel:;
- (void)setElementCenter:;
- (id)elementCenter;
- (void)didSwitherToggled:type:;
- (void)didSelect:;
- (void).cxx_destruct;
@end
