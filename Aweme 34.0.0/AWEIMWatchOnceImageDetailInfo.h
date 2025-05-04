@interface AWEIMWatchOnceImageDetailInfo : IESIMBaseApiModel
@property (nonatomic) AWEIMWatchOnceImageResourceInfo showOnceInfo;
- (id)showOnceInfo;
- (void)setShowOnceInfo:;
- (void).cxx_destruct;
+ (id)showOnceInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
