@interface GEOTileGroupActivationSession : NSObject
@property (nonatomic) NSString uniqueIdentifier;
@property (nonatomic) NSProgress progress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (void)dealloc;
- (id)uniqueIdentifier;
- (void)start;
- (id)progress;
- (void).cxx_destruct;
- (id)captureStatePlistWithHints:;
- (id)initWithIdentifier:configuration:tileGroup:inResourceManifest:environmentName:oldTileGroup:activeScales:activeScenarios:dataSet:migrators:updateType:delegate:delegateQueue:;
@end
