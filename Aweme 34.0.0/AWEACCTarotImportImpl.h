@interface AWEACCTarotImportImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)importAssets:repoContainer:withMode:progressHandler:params:complete:;
- (void)searchTaskWithID:withCompletion:;
- (void)handlePicTemplateProject:workspace:completion:;
- (void)handlePicTemplateTask:targetProject:completion:;
- (void)fetchTasksWithAssets:taskId:taskProgressBlock:completion:;
- (void)fetchImage:workspace:forProject:progress:completion:;
@end
