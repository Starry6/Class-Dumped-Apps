@interface AWETemplateTagsCommonStrategy : AWETemplateTagsBaseStrategy
- (void)didTriggerEvent:;
- (void)didClickWithEvent:;
- (long long)templateType;
+ (BOOL)shouldActiveWithModel:context:;
@end
