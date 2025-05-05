@interface APConfig : NSObject
@property (nonatomic) NSDictionary configContent;
- (BOOL)isEnableForKey:;
- (id)c64to10:;
- (id)configContent;
- (BOOL)isEnable:;
- (void)setConfigContent:;
- (void)updateConfig:;
- (id)utdid;
- (id)valueForKey:;
- (id)init;
- (void).cxx_destruct;
- (id)factor;
+ (id)shared;
@end
