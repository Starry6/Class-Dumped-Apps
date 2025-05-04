@interface AWETemplateTagsFriendVisibleStrategy : AFDTemplateTagsBaseStrategy
- (long long)templateType;
+ (BOOL)shouldActiveWithModel:context:;
+ (id)clientBusinessID;
+ (BOOL)shouldHandleReplaceTriggerEvent:;
+ (long long)handleTypeForReplaceTriggerEvent;
+ (id)generateModelForReplaceTriggerEvent:;
@end
