@interface AWEIMMixPhotoMountModel : MTLModel
@property (nonatomic) AWEIMMixPhotoChallengeInfo challengeInfo;
@property (nonatomic) AWEIMMixPhotoAnchorInfo anchorInfo;
@property (nonatomic) AWEIMMixPhotoJumpInfo jumpInfo;
@property (nonatomic) NSArray styleIdList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)anchorInfo;
- (id)challengeInfo;
- (void)setChallengeInfo:;
- (id)jumpInfo;
- (void)setJumpInfo:;
- (void)setAnchorInfo:;
- (id)styleIdList;
- (void)setStyleIdList:;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
+ (id)anchorInfoJSONTransformer;
+ (id)challengeInfoJSONTransformer;
+ (id)jumpInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
