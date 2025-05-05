@interface CoreDAVMultiStatusItem : CoreDAVItem
@property (nonatomic) NSSet responses;
@property (nonatomic) NSMutableArray orderedResponses;
@property (nonatomic) CoreDAVLeafItem responseDescription;
- (id)init;
- (void)setResponseDescription:;
- (id)orderedResponses;
- (void).cxx_destruct;
- (void)addResponse:;
- (id)description;
- (id)responseDescription;
- (id)responses;
- (void)setOrderedResponses:;
+ (id)copyParseRules;
@end
