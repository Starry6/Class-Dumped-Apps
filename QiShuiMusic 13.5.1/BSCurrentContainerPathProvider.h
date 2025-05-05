@interface BSCurrentContainerPathProvider : NSObject
@property (nonatomic) NSURL defaultPath;
@property (nonatomic) NSURL libraryPath;
@property (nonatomic) NSURL cachesPath;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)libraryPath;
- (id)defaultPath;
- (id)cachesPath;
@end
