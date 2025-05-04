@interface AWEIMWatchOnceVideoDetailInfo : IESIMBaseApiModel
@property (nonatomic) AWEIMWatchOnceResourceInfo showOnceInfo;
- (id)showOnceInfo;
- (void)setShowOnceInfo:;
- (void).cxx_destruct;
+ (id)showOnceInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
