@interface AWEElementGroupLayout : NSObject
@property (nonatomic) AWEElementGroupLayoutConfig layoutConfig;
@property (nonatomic) NSArray elementIDs;
- (void)setLayoutConfig:;
- (id)elementIDs;
- (void)setElementIDs:;
- (void).cxx_destruct;
- (id)layoutConfig;
+ (id)groupLayout:elementIDs:;
+ (id)normalGroupLayoutWithElementIDs:;
+ (id)horizontalGroupLayoutWithElementIDs:scrollEnable:;
@end
