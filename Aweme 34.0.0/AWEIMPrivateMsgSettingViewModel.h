@interface AWEIMPrivateMsgSettingViewModel : NSObject
@property (nonatomic) q actionType;
@property (nonatomic) NSString title;
@property (nonatomic) BOOL checked;
@property (nonatomic) BOOL disable;
- (void)setDisable:;
- (long long)actionType;
- (BOOL)disable;
- (void)setActionType:;
- (void)setChecked:;
- (BOOL)checked;
- (void).cxx_destruct;
- (id)title;
- (id)initWithType:title:;
- (id)requestParams;
@end
