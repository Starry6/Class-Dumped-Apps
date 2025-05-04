@interface AWEECPostShareInfoResponse : MTLModel
@property (nonatomic) NSString shareTitle;
@property (nonatomic) NSString shareContent;
@property (nonatomic) q rankType;
@property (nonatomic) BOOL shouldPostToDOUPlus;
@property (nonatomic) BOOL shouldPostToQC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShareTitle:;
- (id)shareContent;
- (void)setShareContent:;
- (BOOL)shouldPostToDOUPlus;
- (void)setShouldPostToDOUPlus:;
- (BOOL)shouldPostToQC;
- (void)setShouldPostToQC:;
- (void).cxx_destruct;
- (void)setRankType:;
- (long long)rankType;
- (id)shareTitle;
+ (id)JSONKeyPathsByPropertyKey;
@end
