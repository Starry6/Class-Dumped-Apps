@interface AWEScreenCastInnerPageContext : NSObject
@property (nonatomic) NSString firstAwemeID;
@property (nonatomic) NSDictionary logExtraDic;
@property (nonatomic) NSString previousPage;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSNumber nextCursor;
@property (nonatomic) NSNumber offset;
@property (nonatomic) NSString enterScene;
@property (nonatomic) NSNumber hasMore;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)enterFrom;
- (id)logExtraDic;
- (void)setLogExtraDic:;
- (id)nextCursor;
- (void)setNextCursor:;
- (id)enterScene;
- (void)setEnterScene:;
- (id)firstAwemeID;
- (void)setFirstAwemeID:;
- (void)setOffset:;
- (id)offset;
- (void)setHasMore:;
- (id)hasMore;
- (void).cxx_destruct;
- (id)previousPage;
- (void)setPreviousPage:;
@end
