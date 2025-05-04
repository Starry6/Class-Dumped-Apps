@interface AWEDCFeedEnterModel : NSObject
@property (nonatomic) NSString enterMethod;
@property (nonatomic) q enterType;
@property (nonatomic) NSString previousPage;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSDictionary extraDict;
@property (nonatomic) NSString groupId;
@property (nonatomic) NSString authorId;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)extraDict;
- (void)setExtraDict:;
- (void)setGroupId:;
- (id)groupId;
- (void).cxx_destruct;
- (id)previousPage;
- (void)setPreviousPage:;
- (long long)enterType;
- (void)setEnterType:;
- (id)authorId;
- (void)setAuthorId:;
@end
