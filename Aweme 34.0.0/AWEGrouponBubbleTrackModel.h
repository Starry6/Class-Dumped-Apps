@interface AWEGrouponBubbleTrackModel : NSObject
@property (nonatomic) BOOL hasTracked;
@property (nonatomic) q bubbleType;
@property (nonatomic) q showTimestamp;
@property (nonatomic) q clickTimestamp;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) q pageType;
- (void)setExtraParams:;
- (id)extraParams;
- (BOOL)hasTracked;
- (void)setHasTracked:;
- (long long)bubbleType;
- (void)setBubbleType:;
- (long long)clickTimestamp;
- (void)setClickTimestamp:;
- (id)initWithType:pageType:extraParams:;
- (void)trackParamsWithClickType:;
- (void)setPageType:;
- (void).cxx_destruct;
- (long long)pageType;
- (void)setShowTimestamp:;
- (long long)showTimestamp;
@end
