@interface IESECLiveListHeaderStyleControl : MTLModel
@property (nonatomic) q headerLayoutStyle;
@property (nonatomic) q browseStyle;
@property (nonatomic) q tabStyle;
@property (nonatomic) double entryInnerSpace;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)entryInnerSpace;
- (void)setBrowseStyle:;
- (long long)browseStyle;
- (long long)headerLayoutStyle;
- (void)setEntryInnerSpace:;
- (void)setHeaderLayoutStyle:;
- (void)setTabStyle:;
- (long long)tabStyle;
+ (id)JSONKeyPathsByPropertyKey;
@end
