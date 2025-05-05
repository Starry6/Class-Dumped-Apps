@interface NSURLSessionTaskDependencyTree : NSObject
@property (nonatomic) NSURL mainDocumentURL;
- (void)dealloc;
- (id)mainDocumentURL;
- (void)setMainDocumentURL:;
+ (id)dependencyTreeDefaultWeb;
+ (id)dependencyTreeWithJSONData:error:;
+ (id)dependencyTreeWithMainDocumentURL:dependencyDescriptions:;
@end
