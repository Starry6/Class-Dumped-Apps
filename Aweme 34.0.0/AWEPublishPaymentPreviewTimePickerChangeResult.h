@interface AWEPublishPaymentPreviewTimePickerChangeResult : NSObject
@property (nonatomic) BOOL needReloadComponent;
@property (nonatomic) q reloadComponent;
@property (nonatomic) BOOL needSelectIndexPath;
@property (nonatomic) NSIndexPath selectIndexPath;
@property (nonatomic) q selectValue;
- (long long)selectValue;
- (void)setSelectValue:;
- (void)setSelectIndexPath:;
- (id)selectIndexPath;
- (BOOL)isNeedReloadComponent;
- (void)setNeedReloadComponent:;
- (long long)reloadComponent;
- (void)setReloadComponent:;
- (BOOL)isNeedSelectIndexPath;
- (void)setNeedSelectIndexPath:;
- (void).cxx_destruct;
@end
