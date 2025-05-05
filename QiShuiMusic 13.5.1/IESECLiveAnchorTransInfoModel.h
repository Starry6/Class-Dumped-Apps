@interface IESECLiveAnchorTransInfoModel : MTLModel
@property (nonatomic) IESECLiveAnchorTransDetailInfoModel leftInfo;
@property (nonatomic) IESECLiveAnchorTransDetailInfoModel rightInfo;
@property (nonatomic) NSString bgImgURL;
@property (nonatomic) NSNumber sectionHeight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bgImgURL;
- (id)leftInfo;
- (id)rightInfo;
- (void)setBgImgURL:;
- (void)setLeftInfo:;
- (void)setRightInfo:;
- (void).cxx_destruct;
- (id)sectionHeight;
- (void)setSectionHeight:;
+ (id)JSONKeyPathsByPropertyKey;
@end
