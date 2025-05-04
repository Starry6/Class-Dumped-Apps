@interface AWESearchDecoratorCommentModuleContext : NSObject
@property (nonatomic) AWESearchCachalotVerticalBottomBarConfigModel data;
@property (nonatomic) NSString initialContent;
@property (nonatomic) AWESearchDecoratorCommentEffectInsertCardForContainerContext insertCardContext;
@property (nonatomic) NSDictionary logParams;
- (id)logParams;
- (void)setLogParams:;
- (void)setInitialContent:;
- (id)initialContent;
- (id)insertCardContext;
- (void)setInsertCardContext:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
@end
