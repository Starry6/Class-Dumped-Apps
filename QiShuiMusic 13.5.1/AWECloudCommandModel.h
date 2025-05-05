@interface AWECloudCommandModel : NSObject
@property (nonatomic) NSArray blockList;
@property (nonatomic) NSNumber commandId;
@property (nonatomic) NSString type;
@property (nonatomic) NSDictionary params;
- (id)allowedFilePathsAfterChecking:;
- (void)configFileBlockList:;
- (void)setType:;
- (id)initWithDict:;
- (id)type;
- (void).cxx_destruct;
- (id)params;
- (id)commandId;
- (void)setParams:;
- (void)setBlockList:;
- (id)blockList;
- (void)setCommandId:;
@end
