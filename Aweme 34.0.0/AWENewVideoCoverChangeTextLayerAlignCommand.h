@interface AWENewVideoCoverChangeTextLayerAlignCommand : AWENewVideoCoverCommand
@property (nonatomic) q originAWEStoryTextAlignmentStyle;
@property (nonatomic) q nowAWEStoryTextAlignmentStyle;
- (void)realExecute;
- (void)realUnExecute;
- (void)setOriginAWEStoryTextAlignmentStyle:;
- (long long)nowAWEStoryTextAlignmentStyle;
- (long long)originAWEStoryTextAlignmentStyle;
- (void)setNowAWEStoryTextAlignmentStyle:;
@end
