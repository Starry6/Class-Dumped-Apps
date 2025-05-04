@interface AWEPublishToCellModel : NSObject
@property (nonatomic) AWEPublishToControllCell cell;
@property (nonatomic) Q publishToType;
- (void)setPublishToType:;
- (id)initWithCell:type:;
- (unsigned long long)publishToType;
- (void).cxx_destruct;
- (id)cell;
- (void)setCell:;
@end
