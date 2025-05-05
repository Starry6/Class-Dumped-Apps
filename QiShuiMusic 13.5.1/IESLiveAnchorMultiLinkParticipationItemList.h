@interface IESLiveAnchorMultiLinkParticipationItemList : NSObject
@property (nonatomic) NSString sectionName;
@property (nonatomic) NSAttributedString sectionNameAttr;
@property (nonatomic) NSInteger sectionType;
@property (nonatomic) NSArray list;
@property (nonatomic) q followItemCount;
- (long long)followItemCount;
- (id)sectionNameAttr;
- (void)setFollowItemCount:;
- (void)setSectionNameAttr:;
- (int)sectionType;
- (void)setSectionType:;
- (void)setList:;
- (id)list;
- (void).cxx_destruct;
- (id)sectionName;
- (void)setSectionName:;
@end
