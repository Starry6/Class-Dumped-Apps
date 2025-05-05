@interface BDLGeckoTemplateManager : NSObject
@property (nonatomic) NSMapTable dataUpdateBlocks;
@property (nonatomic) NSLock blocksLock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fileForGroupID:;
- (id)blocksLock;
- (id)dataUpdateBlocks;
- (void)geckoDataUpdate:succeed:;
- (void)registerDataUpdate:forGroupID:;
- (id)rootDirForGroupID:;
- (void)setBlocksLock:;
- (void)setDataUpdateBlocks:;
- (id)init;
- (void).cxx_destruct;
- (id)defaultGroupID;
+ (void)lynxLazyLoad;
+ (id)sharedInstance;
@end
