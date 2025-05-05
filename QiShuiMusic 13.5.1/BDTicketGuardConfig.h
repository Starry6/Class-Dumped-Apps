@interface BDTicketGuardConfig : NSObject
@property (nonatomic) BOOL initializeStorage;
@property (nonatomic) BOOL enableFullPathTrack;
@property (nonatomic) BOOL enableStorageOptimize;
@property (nonatomic) BOOL enableKeyChainStorage;
- (BOOL)enableFullPathTrack;
- (BOOL)enableKeyChainStorage;
- (BOOL)enableStorageOptimize;
- (BOOL)initializeStorage;
- (void)setEnableFullPathTrack:;
- (void)setEnableKeyChainStorage:;
- (void)setEnableStorageOptimize:;
- (void)setInitializeStorage:;
@end
