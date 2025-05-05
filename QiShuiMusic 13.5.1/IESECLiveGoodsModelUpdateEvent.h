@interface IESECLiveGoodsModelUpdateEvent : NSObject
@property (nonatomic) NSArray items;
@property (nonatomic) NSArray updatedIndexPaths;
@property (nonatomic) q updateType;
@property (nonatomic) NSDictionary extraInfo;
- (void)setExtraInfo:;
- (void)setUpdatedIndexPaths:;
- (id)updatedIndexPaths;
- (id)items;
- (long long)updateType;
- (void)setItems:;
- (void)setUpdateType:;
- (void).cxx_destruct;
- (id)extraInfo;
@end
