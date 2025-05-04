@interface AWETeenAlbumCoverCellModel : NSObject
@property (nonatomic) Q cardType;
@property (nonatomic) AWEMinorAlbum album;
@property (nonatomic) AWETeenGeneralResourceGroupModel guideCardResourceGroup;
@property (nonatomic) BOOL isCoverDynamic;
@property (nonatomic) BOOL isCoverPlayed;
@property (nonatomic) Q labelType;
- (id)guideCardResourceGroup;
- (void)setGuideCardResourceGroup:;
- (BOOL)isCoverDynamic;
- (void)setIsCoverDynamic:;
- (BOOL)isCoverPlayed;
- (void)setIsCoverPlayed:;
- (unsigned long long)labelType;
- (void)setLabelType:;
- (void)setAlbum:;
- (void).cxx_destruct;
- (id)album;
- (unsigned long long)cardType;
- (void)setCardType:;
@end
