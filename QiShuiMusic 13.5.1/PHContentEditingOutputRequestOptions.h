@interface PHContentEditingOutputRequestOptions : NSObject
@property (nonatomic) BOOL asyncAdjustment;
@property (nonatomic) BOOL onlyChangingOriginalChoice;
@property (nonatomic) q playbackStyle;
@property (nonatomic) BOOL preferHEICForRenderedImages;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (long long)playbackStyle;
- (BOOL)isOnlyChangingOriginalChoice;
- (BOOL)isAsyncAdjustment;
- (void)setOnlyChangingOriginalChoice:;
- (void)setAsyncAdjustment:;
- (void)setPlaybackStyle:;
- (BOOL)preferHEICForRenderedImages;
- (void)setPreferHEICForRenderedImages:;
+ (BOOL)supportsSecureCoding;
@end
