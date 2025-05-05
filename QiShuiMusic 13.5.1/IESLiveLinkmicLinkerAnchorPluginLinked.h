@interface IESLiveLinkmicLinkerAnchorPluginLinked : NSObject
@property (nonatomic) <IESLiveLinkmicLinkerPluginProvider> provider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didSetAttachingDIContext;
- (void)linkerDidStart;
- (void)linkerDidStop;
- (void)linkerInteractListUpdated;
- (void)linkerUserBindToView;
- (void)linkerUserPositionUpdated;
- (id)sortedInteractSession;
- (void)setProvider:;
- (id)provider;
- (void).cxx_destruct;
@end
