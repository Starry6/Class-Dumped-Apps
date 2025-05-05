@interface LynxAsyncManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)clearPreCreateCache;
- (void)clearPreLayoutCache;
- (id)getLynxViewFromPreCreateCache:;
- (id)getLynxViewFromPreCreateCache:shouldRemove:;
- (id)getLynxViewFromPreCreateCache:waitUntilDone:;
- (id)getLynxViewFromPreLayoutCache:;
- (id)getLynxViewFromPreLayoutCache:shouldRemove:;
- (id)getLynxViewFromPreLayoutCache:waitUntilDone:;
- (id)initWithBuilderBlock:;
- (void)preCreate:createOperator:viewCreator:finishedCallback:;
- (void)preCreateAndLayout:createOperator:viewCreator:layoutOperator:finishedCallback:;
- (void)preLayout:container:layoutOperator:finishedCallback:;
- (id)processRenderFromCache:;
- (id)removeLynxViewFromPreCreateCache:;
- (id)removeLynxViewFromPreLayoutCache:;
- (void)dealloc;
- (void)clear;
- (void).cxx_destruct;
- (void)cache:willEvictObject:;
@end
