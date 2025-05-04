@interface AWEStudioCreateSchemaIMP : NSObject
+ (void)schemaStudioCreateOriginalTextWithPublishModel:completion:;
+ (void)router_default:schemaParams:promiseCompletion:;
+ (unsigned long long)schemaParseType:;
+ (id)routerParamConvertSchemaParam:routerType:;
+ (void)router_use_sticker:schemaParams:schemaURL:promiseCompletion:routerCompletion:transitionInfo:;
+ (void)router_reuse_video_sticker:schemaParams:promiseCompletion:;
+ (void)router_duet_video:schemaParams:schemaURL:promiseCompletion:routerCompletion:transitionInfo:;
+ (void)router_use_music:schemaParams:promiseCompletion:routerCompletion:;
+ (void)router_use_challenge:schemaParams:transitionInfo:promiseCompletion:routerCompletion:;
+ (void)router_normal:schemaParams:promiseCompletion:;
+ (void)router_mv_detail:schemaParams:promiseCompletion:;
+ (void)router_guide:schemaParams:promiseCompletion:routerCompletion:;
+ (void)router_albumWithSchemaParams:promiseCompletion:routerCompletion:;
+ (void)router_use_info_stickerWithSchemaParams:promiseCompletion:;
+ (void)router_im_chatWithSchemaParams:promiseCompletion:;
+ (void)router_multiWithSchemaParams:routerCompletion:;
+ (void)router_originalTextWithSchemaParams:promiseCompletion:routerCompletion:;
+ (void)router_originalTextWithPublishModel:promiseCompletion:routerCompletion:;
+ (void)schemaStudioCreateSchemaParams:transitionInfo:completion:;
+ (void)schemaStudioCreateMultiJumpWithParams:completion:;
+ (void)schemaStudioCreateOriginalTextWithParams:completion:;
@end
