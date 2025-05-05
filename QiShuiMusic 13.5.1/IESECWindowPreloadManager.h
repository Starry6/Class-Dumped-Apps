@interface IESECWindowPreloadManager : NSObject
@property (nonatomic) NSMapTable mapper;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getPreloadCompoentObjectWithCompoent:;
- (BOOL)isPreload;
- (void)preloadCompoent:number:model:;
- (void)preloadWindowCompoent;
- (void)removeUnusedPreloadCompoent;
- (void)setIsPreload:;
- (id)init;
- (id)mapper;
- (void).cxx_destruct;
- (void)setMapper:;
+ (id)shareInstance;
@end
