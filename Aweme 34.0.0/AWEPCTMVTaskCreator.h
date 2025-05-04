@interface AWEPCTMVTaskCreator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)createTaskWithContext:;
+ (void)executeWithContext:task:finishHandler:;
+ (void)enterGenericTemplateAlbumWithContext:task:finishHandler:;
+ (void)updatePublishModel:templateModel:;
+ (void)p_fetchDetailWithConfig:completion:;
@end
