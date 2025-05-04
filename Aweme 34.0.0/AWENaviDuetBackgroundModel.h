@interface AWENaviDuetBackgroundModel : NSObject
@property (nonatomic) NSString effectName;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSArray iconURLs;
@property (nonatomic) IESEffectModel effect;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)effectName;
- (void)setEffectName:;
- (id)initWithEffet:;
- (id)displayName;
- (id)effect;
- (void)setDisplayName:;
- (void).cxx_destruct;
- (void)setEffect:;
- (id)iconURLs;
- (void)setIconURLs:;
+ (id)modelWithEffet:;
@end
