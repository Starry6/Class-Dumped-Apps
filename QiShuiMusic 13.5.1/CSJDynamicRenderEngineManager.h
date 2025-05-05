@interface CSJDynamicRenderEngineManager : NSObject
@property (nonatomic) NSError createError;
- (void)setCreateError:;
- (id)dynamicViewWithGlobalModel:error:;
- (id)init;
- (id)createError;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
