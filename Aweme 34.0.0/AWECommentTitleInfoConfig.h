@interface AWECommentTitleInfoConfig : NSObject
@property (nonatomic) q tagType;
@property (nonatomic) NSString tagText;
@property (nonatomic) BOOL hasCoCreatorInfo;
@property (nonatomic) BOOL coCreatorInInviting;
@property (nonatomic) NSString coCreatorTip;
- (void)setTagText:;
- (id)tagText;
- (void)setHasCoCreatorInfo:;
- (void)setCoCreatorInInviting:;
- (void)setCoCreatorTip:;
- (id)coCreatorTip;
- (BOOL)coCreatorInInviting;
- (BOOL)hasCoCreatorInfo;
- (long long)tagType;
- (void).cxx_destruct;
- (void)setTagType:;
@end
