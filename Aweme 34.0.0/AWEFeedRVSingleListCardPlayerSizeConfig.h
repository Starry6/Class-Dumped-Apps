@interface AWEFeedRVSingleListCardPlayerSizeConfig : NSObject
@property (nonatomic) q sizeType;
@property (nonatomic) double videoViewHeight;
@property (nonatomic) double videoCardWidth;
- (double)videoViewHeight;
- (void)setVideoViewHeight:;
- (double)videoCardWidth;
- (void)setVideoCardWidth:;
- (void)setSizeType:;
- (long long)sizeType;
+ (id)playerSizeFactory:width:andOtherHeight:;
+ (double)getHeightWith:width:andOtherHeight:;
@end
