@interface AWEStudioPostGoodsSeedingModel : NSObject
@property (nonatomic) NSString seedID;
@property (nonatomic) NSString draftID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString views;
@property (nonatomic) NSString tag;
@property (nonatomic) NSString referSeedID;
@property (nonatomic) NSString referSeedName;
- (id)draftID;
- (void)setDraftID:;
- (id)seedID;
- (void)setSeedID:;
- (id)referSeedID;
- (void)setReferSeedID:;
- (id)referSeedName;
- (void)setReferSeedName:;
- (id)tag;
- (void)setTag:;
- (id)views;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)copyWithZone:;
- (void)setViews:;
@end
