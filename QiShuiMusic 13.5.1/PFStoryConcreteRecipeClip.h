@interface PFStoryConcreteRecipeClip : NSObject
@property (nonatomic) NSString assetIdentifier;
@property (nonatomic) q playbackStyle;
@property (nonatomic) {?=qiIq} minimumDuration;
@property (nonatomic) {?=qiIq} idealDuration;
@property (nonatomic) {?=qiIq} maximumDuration;
@property (nonatomic) {?=qiIq} videoCueOffset;
@property (nonatomic) q motionStyle;
@property (nonatomic) q transition;
@property (nonatomic) NSString diagnosticDescription;
- (long long)transition;
- (id)diagnosticDescription;
- (id)maximumDuration;
- (id)minimumDuration;
- (void).cxx_destruct;
- (long long)playbackStyle;
- (id)assetIdentifier;
- (BOOL)isEqualToClip:;
- (id)idealDuration;
- (id)videoCueOffset;
- (long long)motionStyle;
- (id)initWithAssetIdentifier:playbackStyle:minimumDuration:idealDuration:maximumDuration:videoCueOffset:motionStyle:transition:;
@end
