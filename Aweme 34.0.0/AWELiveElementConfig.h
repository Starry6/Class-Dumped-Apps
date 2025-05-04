@interface AWELiveElementConfig : NSObject
@property (nonatomic) BOOL useAdded;
@property (nonatomic) NSArray deleteElements;
@property (nonatomic) NSArray addedElements;
- (void)setAddedElements:;
- (void)setUseAdded:;
- (BOOL)canAddElementBy:;
- (BOOL)useAdded;
- (id)addedElements;
- (id)deleteElements;
- (void)setDeleteElements:;
- (void).cxx_destruct;
+ (id)buildDefaultElementConfig;
@end
