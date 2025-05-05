@interface CardDAVBulkUploadTaskGroup : CoreDAVBulkUploadTaskGroup
- (id)initWithFolderURL:checkCTag:uuidsToAddActions:hrefsToModDeleteActions:context:accountInfoProvider:taskManager:;
- (Class)multiPutTaskClass;
@end
