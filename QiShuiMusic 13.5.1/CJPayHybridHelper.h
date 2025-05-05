@interface CJPayHybridHelper : NSObject
+ (BOOL)hasHybridPlugin;
+ (id)getContainerID:;
+ (id)createHybridView:wkDelegate:initialData:;
+ (id)getRawWebview:;
+ (void)sendEvent:params:container:;
@end
