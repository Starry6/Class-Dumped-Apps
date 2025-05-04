@interface AWESearchShowTagModel : MTLModel
@property (nonatomic) q vtagDelayTS;
@property (nonatomic) BOOL vtagEnable;
@property (nonatomic) BOOL vtagDefaultEnable;
@property (nonatomic) NSString vtagDefaultData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)vtagDelayTS;
- (BOOL)vtagDefaultEnable;
- (BOOL)vtagEnable;
- (void)setVtagDelayTS:;
- (void)setVtagEnable:;
- (void)setVtagDefaultEnable:;
- (id)vtagDefaultData;
- (void)setVtagDefaultData:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
