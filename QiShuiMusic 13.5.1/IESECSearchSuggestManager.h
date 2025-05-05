@interface IESECSearchSuggestManager : NSObject
@property (nonatomic) NSString pageSource;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSDictionary additionalParameters;
- (void)addSearchRecordWithKeyword:;
- (id)enterFrom;
- (void)fetchSearchSuggestWithParameter:completionHandler:;
- (id)pageSource;
- (id)searchRecordsDescription;
- (id)sessionRecordsDescription;
- (void)setEnterFrom:;
- (void)setPageSource:;
- (id)init;
- (void).cxx_destruct;
- (void)setAdditionalParameters:;
- (void)resetSession;
- (id)additionalParameters;
@end
