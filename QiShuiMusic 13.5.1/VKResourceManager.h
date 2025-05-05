@interface VKResourceManager : NSObject
- (id)init;
- (BOOL)isDevResourceWithName:;
- (id)dataForResourceWithName:;
- (id)dataForResourceWithName:fallbackNameHandler:;
- (void).cxx_destruct;
- (id)pathForResourceWithName:;
- (id)_localNameForResourceName:;
@end
