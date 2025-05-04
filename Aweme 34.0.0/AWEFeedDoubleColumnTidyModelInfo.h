@interface AWEFeedDoubleColumnTidyModelInfo : NSObject
@property (nonatomic) NSDictionary queryParams;
@property (nonatomic) NSDictionary bodyParams;
@property (nonatomic) NSString preLogID;
@property (nonatomic) NSString preItemIDs;
@property (nonatomic) NSString preItemFrom;
- (void)setBodyParams:;
- (void)setPreLogID:;
- (void)setPreItemFrom:;
- (void)setPreItemIDs:;
- (id)bodyParams;
- (id)preLogID;
- (id)preItemIDs;
- (id)preItemFrom;
- (void).cxx_destruct;
- (id)queryParams;
- (id)copyWithZone:;
- (void)setQueryParams:;
@end
