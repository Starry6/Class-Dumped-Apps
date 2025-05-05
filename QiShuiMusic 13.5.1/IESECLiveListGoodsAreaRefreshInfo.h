@interface IESECLiveListGoodsAreaRefreshInfo : NSObject
@property (nonatomic) q anchorType;
@property (nonatomic) q updateType;
@property (nonatomic) NSArray indexPaths;
@property (nonatomic) {CGPoint=dd} anchorOffset;
@property (nonatomic) NSDictionary extraInfo;
- (void)setExtraInfo:;
- (long long)anchorType;
- (id)indexPaths;
- (long long)updateType;
- (void)setUpdateType:;
- (void).cxx_destruct;
- (void)setIndexPaths:;
- (id)anchorOffset;
- (void)setAnchorOffset:;
- (id)extraInfo;
- (void)setAnchorType:;
@end
