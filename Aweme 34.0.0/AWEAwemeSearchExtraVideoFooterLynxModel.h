@interface AWEAwemeSearchExtraVideoFooterLynxModel : AWEBaseApiModel
@property (nonatomic) NSString schema;
@property (nonatomic) NSString rawData;
@property (nonatomic) double height;
@property (nonatomic) BOOL clearFootCorner;
@property (nonatomic) q delayShowTime;
@property (nonatomic) NSDictionary logDict;
@property (nonatomic) BOOL showLynxImmediately;
@property (nonatomic) NSString waterfallLayoutSchema;
@property (nonatomic) double waterfallHeight;
@property (nonatomic) NSString anchorType;
@property (nonatomic) AWEGeneralSearchPOIAnchorInfoModel anchorInfoModel;
- (id)logDict;
- (void)setLogDict:;
- (id)bindLynxViewWrapper;
- (id)waterfallLayoutSchema;
- (long long)delayShowTime;
- (BOOL)showLynxImmediately;
- (BOOL)clearFootCorner;
- (void)setDelayShowTime:;
- (void)setClearFootCorner:;
- (void)setShowLynxImmediately:;
- (void)setWaterfallLayoutSchema:;
- (double)waterfallHeight;
- (void)setWaterfallHeight:;
- (id)anchorInfoModel;
- (void)setAnchorInfoModel:;
- (id)schema;
- (void)setSchema:;
- (void)setHeight:;
- (void)setRawData:;
- (void).cxx_destruct;
- (id)anchorType;
- (double)height;
- (id)rawData;
- (void)setAnchorType:;
+ (id)anchorInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
