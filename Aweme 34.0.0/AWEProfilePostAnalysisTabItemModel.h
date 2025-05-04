@interface AWEProfilePostAnalysisTabItemModel : NSObject
@property (nonatomic) Q tabType;
@property (nonatomic) NSString title;
@property (nonatomic) q count;
@property (nonatomic) BOOL showCount;
@property (nonatomic) NSString schema;
- (unsigned long long)tabType;
- (void)setTabType:;
- (id)schema;
- (void)setSchema:;
- (void)setCount:;
- (long long)count;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setShowCount:;
- (BOOL)showCount;
@end
