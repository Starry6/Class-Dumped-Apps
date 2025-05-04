@interface AWEPCTPicTemplateTaskCreator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)createTaskWithContext:;
+ (void)executePicTemplateApplyTaskWith:task:finishHandler:;
+ (void)checkTemplateIsReadyWith:completion:;
@end
