@interface AWECommentEvaluationTitleElementConfig : NSObject
@property (nonatomic) NSString titlePlaceholder;
@property (nonatomic) NSString titleMinCountToast;
@property (nonatomic) NSString titleMaxCountToast;
@property (nonatomic) q titleMinCount;
@property (nonatomic) q titleMaxCount;
@property (nonatomic) BOOL titleDisableEdit;
- (BOOL)titleDisableEdit;
- (long long)titleMaxCount;
- (long long)titleMinCount;
- (id)titleMinCountToast;
- (id)titleMaxCountToast;
- (void)setTitleMinCountToast:;
- (void)setTitleMaxCountToast:;
- (void)setTitleMinCount:;
- (void)setTitleMaxCount:;
- (void)setTitleDisableEdit:;
- (void).cxx_destruct;
- (void)setTitlePlaceholder:;
- (id)titlePlaceholder;
@end
