@interface PIASnapShotInterceptor : NSObject
@property (nonatomic) PIABiMapTable table;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bdw_URLSchemeTask:didLoadData:;
- (void)bdw_URLSchemeTaskDidFinishLoading:;
- (id)getSnapshotInfoFromHTML:;
- (id)init;
- (void)setTable:;
- (id)table;
- (BOOL)canHandleRequest:;
- (void).cxx_destruct;
+ (id)sharedInterceptor;
@end
