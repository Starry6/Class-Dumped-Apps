@interface CalDAVScheduleResponseItem : CoreDAVItem
@property (nonatomic) NSMutableSet responses;
@property (nonatomic) NSMutableSet successfulICS;
@property (nonatomic) NSMutableSet failedResponseItems;
- (id)copyParseRules;
- (void).cxx_destruct;
- (id)description;
- (id)responses;
- (void)setResponses:;
- (void)addNewTopLevelItem:;
- (id)successfulICS;
- (void)setSuccessfulICS:;
- (id)failedResponseItems;
- (void)setFailedResponseItems:;
@end
