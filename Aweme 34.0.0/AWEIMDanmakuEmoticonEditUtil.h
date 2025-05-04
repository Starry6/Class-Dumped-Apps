@interface AWEIMDanmakuEmoticonEditUtil : NSObject
+ (BOOL)isEnableWithConversation:;
+ (id)schemaWithConversationID:enterMethod:routerParams:;
+ (id)attributeStringWithContent:fontConfig:;
+ (id)imageWithImage:imageCapInsets:attributeText:boundingSize:textInsets:minSize:;
+ (id)danmakuEmoticonEditPanelTransferWithParamsDictionary:;
+ (void)playImagesWithText:danmakuID:completion:;
+ (id)dirtyWordCheckWithKeyword:completion:;
@end
