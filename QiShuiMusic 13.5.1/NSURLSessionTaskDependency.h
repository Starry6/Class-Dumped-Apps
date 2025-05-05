@interface NSURLSessionTaskDependency : NSObject
@property (nonatomic) NSURLSessionTaskDependencyDescription taskDependencyDescription;
@property (nonatomic) NSURLSessionTask parentTask;
@property (nonatomic) NSURLSessionTask mainDocumentTask;
- (id)init;
- (void)dealloc;
- (id)taskDependencyDescription;
- (void)setTaskDependencyDescription:;
- (id)parentTask;
- (id)mainDocumentTask;
+ (id)taskDependencyWithParentTask:priority:exclusive:;
+ (id)taskDependencyWithMainDocumentTask:;
+ (id)taskDependencyWithMainDocumentTask:taskDependencyDescription:;
@end
