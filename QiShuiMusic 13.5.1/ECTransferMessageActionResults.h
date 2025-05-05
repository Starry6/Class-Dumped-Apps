@interface ECTransferMessageActionResults : ECLocalMessageActionResults
@property (nonatomic) q phaseForResults;
@property (nonatomic) NSArray completedItems;
@property (nonatomic) NSArray failedItems;
@property (nonatomic) NSArray createdServerMessages;
@property (nonatomic) NSDictionary downloadedDataByCopyItems;
@property (nonatomic) NSError error;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithBuilder:;
- (void).cxx_destruct;
- (id)completedItems;
- (void)setCompletedItems:;
- (void)setPhaseForResults:;
- (void)setFailedItems:;
- (void)setCreatedServerMessages:;
- (void)setDownloadedDataByCopyItems:;
- (long long)phaseForResults;
- (id)failedItems;
- (id)createdServerMessages;
- (id)downloadedDataByCopyItems;
@end
