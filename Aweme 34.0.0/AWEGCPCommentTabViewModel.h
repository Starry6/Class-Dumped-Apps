@interface AWEGCPCommentTabViewModel : NSObject
@property (nonatomic) NSMutableDictionary originInitialData;
@property (nonatomic) BOOL preloadHybridViewDidUpdateData;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSString lynxURL;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)initWithAwemeModel:;
- (void)setLynxURL:;
- (id)lynxURL;
- (id)originInitialData;
- (void)setOriginInitialData:;
- (BOOL)preloadHybridViewDidUpdateData;
- (void)setPreloadHybridViewDidUpdateData:;
- (void).cxx_destruct;
- (id)getSchema;
@end
