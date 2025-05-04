@interface AWECloudCommandModel : NSObject
@property (nonatomic) NSArray blockList;
@property (nonatomic) NSNumber commandId;
@property (nonatomic) NSString type;
@property (nonatomic) NSDictionary params;
- (id)allowedFilePathsAfterChecking:;
- (void)configFileBlockList:;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)initWithDict:;
- (id)params;
- (id)commandId;
- (void)setParams:;
- (id)blockList;
- (void)setBlockList:;
- (void)setCommandId:;
@end
