@interface AWEFeedStickerAndRiskTipsReverseManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)awemeListWithStickerFilteredIfNeeded:;
+ (long long)stickerReverseType;
+ (BOOL)isBasicConditionSatisfiedForReverse;
+ (BOOL)shouldFilterModelForSticker:;
+ (BOOL)shouldFilterHandlerWithModel:referString:;
+ (id)handlersWithPluginStickersFilteredIfNeeded:referString:model:;
+ (id)albumHandlersWithPluginStickersFilteredIfNeeded:referString:model:;
@end
