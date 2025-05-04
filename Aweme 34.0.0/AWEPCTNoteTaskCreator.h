@interface AWEPCTNoteTaskCreator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)createTaskWithContext:;
+ (void)executeWithContext:task:finishHandler:;
+ (BOOL)enableEnterNoteAlbumWithContext:;
+ (BOOL)enableLokiEffectTemplate;
+ (void)handleLokiEffectTemplateWithContext:templateId:finishHandler:;
+ (void)enterImageAlbumNoteAlbumWithContext:finishHandler:;
+ (BOOL)enablePixelTemplate;
+ (void)handlePixelTemplateWithContext:templateId:finishHandler:;
+ (id)albumConfigWithContext:;
@end
