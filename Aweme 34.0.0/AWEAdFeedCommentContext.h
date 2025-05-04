@interface AWEAdFeedCommentContext : NSObject
@property (nonatomic) NSString itemID;
@property (nonatomic) NSNumber creativeID;
@property (nonatomic) NSString authorID;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setEnterFrom:;
- (void)setExtraParams:;
- (id)enterFrom;
- (id)extraParams;
- (void)setCreativeID:;
- (id)itemID;
- (void)setItemID:;
- (void).cxx_destruct;
- (id)authorID;
- (void)setAuthorID:;
- (id)creativeID;
@end
