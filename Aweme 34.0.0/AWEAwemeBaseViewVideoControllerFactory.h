@interface AWEAwemeBaseViewVideoControllerFactory : NSObject
+ (void)configVideoControllerWithContext:videoController:;
+ (id)initVideoControllerWithMediaType:baseViewController:;
+ (id)initRichAwemeVideoControllerWithModel:videoController:videoContext:;
@end
