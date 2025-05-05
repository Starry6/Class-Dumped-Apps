@interface MPAVErrorResolver : NSObject
@property (nonatomic) <MPAVErrorResolverDelegate> delegate;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)resolveError:;
- (void)sendDidResolveError:withResolution:;
@end
