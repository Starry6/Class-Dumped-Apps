@interface AWEGeneralSearchSubTabConfig : AWEBaseApiModel
@property (nonatomic) NSString tabName;
@property (nonatomic) NSString subChannel;
@property (nonatomic) NSNumber isAutoFill;
@property (nonatomic) BOOL selected;
- (id)subChannel;
- (void)setSubChannel:;
- (void)setIsAutoFill:;
- (id)isAutoFill;
- (void).cxx_destruct;
- (BOOL)selected;
- (void)setSelected:;
- (id)tabName;
- (void)setTabName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
