@interface AWERecordBeautyCacheItemModel : NSObject
@property (nonatomic) NSString nodeId;
@property (nonatomic) NSString resourceId;
@property (nonatomic) NSNumber value;
@property (nonatomic) NSNumber isSelected;
@property (nonatomic) NSNumber isApplied;
- (id)resourceId;
- (void)setResourceId:;
- (void)setIsApplied:;
- (id)isApplied;
- (id)value;
- (void)setIsSelected:;
- (void)setValue:;
- (id)isSelected;
- (void).cxx_destruct;
- (id)nodeId;
- (id)toDict;
- (void)setNodeId:;
+ (id)generateCacheModelFromDictionary:;
@end
