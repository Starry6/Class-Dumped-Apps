@interface IESLiveGiftImageItem : HTSLiveGiftItem
@property (nonatomic) <IESLiveURLSchemaHandlerAdapter> schemaURLHandler;
- (BOOL)canCombo;
- (id)schemaURLHandler;
- (void)selectFailed;
- (unsigned long long)selectFailedType;
- (void)setSchemaURLHandler:;
- (void).cxx_destruct;
- (BOOL)canGroup;
- (BOOL)canSelect;
+ (id)itemFromModel:attachingDIContext:;
@end
