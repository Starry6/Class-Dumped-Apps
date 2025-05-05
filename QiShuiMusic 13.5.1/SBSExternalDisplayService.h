@interface SBSExternalDisplayService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_connection;
- (void)removeObserver:;
- (void)addObserver:;
- (void)dealloc;
- (id)externalDisplayWillDisconnect:;
- (id)externalDisplayDidConnect:;
- (void).cxx_destruct;
- (id)externalDisplayDidUpdateProperties:;
- (void)getConnectedDisplayInfoWithCompletionHandler:;
- (void)setDisplayArrangement:forDisplay:;
- (void)setMirroringEnabled:forDisplay:;
- (void)setSettings:forDisplay:options:completionHandler:;
@end
