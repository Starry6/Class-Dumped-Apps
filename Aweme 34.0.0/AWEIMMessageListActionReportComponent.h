@interface AWEIMMessageListActionReportComponent : AWEIMComponentBase
@property (nonatomic) AWEIMActionSheetItemModel reportItemModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (id)reportItemModel;
- (void)onReportItemTapped;
- (void)setReportItemModel:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
