@interface NSURLSessionTaskDependencyDescription : NSObject
@property (nonatomic) float priority;
@property (nonatomic) BOOL exclusive;
@property (nonatomic) NSString dependentURLPath;
@property (nonatomic) NSString dependentMimeType;
@property (nonatomic) NSString parentURLPath;
@property (nonatomic) NSString parentMimeType;
- (void)setPriority:;
- (void)dealloc;
- (id)description;
- (float)priority;
- (void)setExclusive:;
- (BOOL)exclusive;
- (id)dependentURLPath;
- (id)dependentMimeType;
- (id)parentURLPath;
- (id)parentMimeType;
+ (id)taskDependencyDescriptionWithURLPath:parentURLPath:;
+ (id)taskDependencyDescriptionWithURLPath:parentMimeType:;
+ (id)taskDependencyDescriptionWithMimeType:parentURLPath:;
+ (id)taskDependencyDescriptionWithMimeType:parentMimeType:;
+ (id)taskDependencyDescriptionWithParentURLPath:;
+ (id)taskDependencyDescriptionWithParentMimeType:;
@end
