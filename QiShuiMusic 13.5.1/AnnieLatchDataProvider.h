@interface AnnieLatchDataProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getJSDataWithContainer:;
- (void)getJSDataWithContainer:completion:;
- (void)getJSDataWithContainer:sync:completion:;
- (id)latchDataWithContainer:;
+ (id)getLatchInitJsUrl:channel:;
+ (id)getLatchPrefetchJsUrl:bundle:;
+ (id)urlSubstring:toPath:options:;
@end
