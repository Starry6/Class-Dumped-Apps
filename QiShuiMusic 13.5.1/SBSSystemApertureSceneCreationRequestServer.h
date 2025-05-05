@interface SBSSystemApertureSceneCreationRequestServer : NSObject
@property (nonatomic) <SBSSystemApertureSceneCreationRequestServerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_addConnection:;
- (void)_removeConnection:;
- (void)startServer;
- (void)dealloc;
- (void)listener:didReceiveConnection:withContext:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)invalidate;
- (id)requestSystemApertureSceneWithRequestIdentifier:;
- (void)requestSystemApertureSceneForCurrentProcess;
+ (id)interface;
+ (id)serviceQuality;
+ (id)identifier;
+ (id)activeInstance;
@end
