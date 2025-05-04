@interface AWESearchActionRecord : NSObject
@property (nonatomic) Q searchResultTab;
@property (nonatomic) NSString searchId;
@property (nonatomic) NSString searchKeyword;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString groupId;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)enterFrom;
- (id)searchId;
- (void)setSearchId:;
- (id)searchKeyword;
- (void)setSearchKeyword:;
- (unsigned long long)searchResultTab;
- (void)setSearchResultTab:;
- (void)setGroupId:;
- (id)groupId;
- (void).cxx_destruct;
@end
