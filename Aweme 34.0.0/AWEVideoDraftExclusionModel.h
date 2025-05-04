@interface AWEVideoDraftExclusionModel : NSObject
@property (nonatomic) BOOL isHideSearch;
@property (nonatomic) NSArray exclusionSecUidList;
@property (nonatomic) NSString exclusionListJson;
@property (nonatomic) BOOL isExclusionSelected;
@property (nonatomic) NSArray exclusionUserList;
- (BOOL)isHideSearch;
- (void)setIsHideSearch:;
- (id)exclusionSecUidList;
- (void)setExclusionSecUidList:;
- (id)exclusionUserList;
- (void)setExclusionUserList:;
- (void)setIsExclusionSelected:;
- (BOOL)isExclusionSelected;
- (void)setExclusionListJson:;
- (id)exclusionListJson;
- (id)init;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)copyWithZone:;
- (BOOL)isEqualToObject:;
@end
