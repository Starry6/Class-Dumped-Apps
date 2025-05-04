@interface AWECommentListRequestModel : NSObject
@property (nonatomic) NSString awemeID;
@property (nonatomic) NSNumber creativeID;
@property (nonatomic) NSNumber offset;
@property (nonatomic) NSNumber count;
@property (nonatomic) NSArray insertIDs;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString authToken;
@property (nonatomic) NSDictionary extraParams;
- (id)referString;
- (void)setInsertIDs:;
- (id)insertIDs;
- (void)setReferString:;
- (void)setExtraParams:;
- (id)extraParams;
- (void)setCreativeID:;
- (void)setAwemeID:;
- (id)awemeID;
- (void)setAuthToken:;
- (id)authToken;
- (void)setCount:;
- (void)setOffset:;
- (id)offset;
- (id)count;
- (void).cxx_destruct;
- (id)creativeID;
@end
