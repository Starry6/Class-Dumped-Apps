@interface AWEPlayInteractionDescriptionDefaultTruncationTokenController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)calculateTruncationTokenWithContext:;
- (BOOL)shouldReLayoutForRendererDidCalculateNumberOfLinesWithContext:;
- (id)setTruncationTokenIfNeedWithContext:;
- (BOOL)isStoryWithModel:;
- (id)handleLineFeedAndSpace:;
- (BOOL)isSafeSubstringRange:forString:;
@end
